#include <Qt3DCore>
#include <Qt3DExtras>
#include <Qt3DRender>
#include <Qt3DInput>
#include <QtWidgets>

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    // Window
    QWidget *container = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(container);
    Qt3DExtras::Qt3DWindow *view = new Qt3DExtras::Qt3DWindow();
    QWidget *containerForRenderWindow = QWidget::createWindowContainer(view);
    layout->addWidget(containerForRenderWindow);
    container->setWindowTitle(QStringLiteral("Qt 3D Point Cloud"));
    container->resize(800, 600);
    container->show();

    // Root Entity
    Qt3DCore::QEntity *rootEntity = new Qt3DCore::QEntity();

    // Point Cloud Geometry
    Qt3DRender::QGeometryRenderer *geometryRenderer = new Qt3DRender::QGeometryRenderer();
    Qt3DRender::QGeometry *geometry = new Qt3DRender::QGeometry();
    Qt3DRender::QBuffer *vertexBuffer = new Qt3DRender::QBuffer(Qt3DRender::QBuffer::VertexBuffer);
    Qt3DRender::QAttribute *positionAttribute = new Qt3DRender::QAttribute();
    geometryRenderer->setInstanceCount(1);
    geometryRenderer->setFirstVertex(0);
    geometryRenderer->setPrimitiveType(Qt3DRender::QGeometryRenderer::Points);
    positionAttribute->setAttributeType(Qt3DRender::QAttribute::VertexAttribute);
    positionAttribute->setBuffer(vertexBuffer);
    positionAttribute->setDataType(Qt3DRender::QAttribute::Float);
    positionAttribute->setDataSize(3);
    positionAttribute->setByteOffset(0);
    positionAttribute->setByteStride(3 * sizeof(float));
    positionAttribute->setCount(1); // Number of points
    geometry->addAttribute(positionAttribute);
    geometryRenderer->setGeometry(geometry);

    // Material
    Qt3DExtras::QPhongMaterial *material = new Qt3DExtras::QPhongMaterial();
    material->setAmbient(Qt::white);
    material->setDiffuse(Qt::white);
    material->setSpecular(Qt::white);

    // Transform
    Qt3DCore::QTransform *transform = new Qt3DCore::QTransform();

    // Mesh
    Qt3DCore::QEntity *pointCloudEntity = new Qt3DCore::QEntity(rootEntity);
    pointCloudEntity->addComponent(geometryRenderer);
    pointCloudEntity->addComponent(material);
    pointCloudEntity->addComponent(transform);

    // Populate Point Cloud Data
    QVector<float> pointCloudData = {
        // x, y, z coordinates for each point
        0.0f, 0.0f, 0.0f,  // Example point
        // Add more points as needed
    };
    QByteArray byteArray(reinterpret_cast<const char*>(pointCloudData.data()), pointCloudData.size() * sizeof(float));
    vertexBuffer->setData(byteArray);

    // Camera
    Qt3DRender::QCamera *camera = view->camera();
    camera->lens()->setPerspectiveProjection(45.0f, 16.0f/9.0f, 0.1f, 1000.0f);
    camera->setPosition(QVector3D(0, 0, 20));
    camera->setViewCenter(QVector3D(0, 0, 0));

    // FrameGraph
    Qt3DRender::QRenderSettings *renderSettings = view->renderSettings();
    Qt3DRender::QForwardRenderer *forwardRenderer = new Qt3DRender::QForwardRenderer();
    renderSettings->setRenderPolicy(Qt3DRender::QRenderSettings::OnDemand);
    renderSettings->setActiveFrameGraph(forwardRenderer);

    // Set root object of the scene
    view->setRootEntity(rootEntity);

    return app.exec();
}
