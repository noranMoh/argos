#
# Compile Bullet Physics Engine 
#

#
# Headers
#
# Headers for the bullet physics engine

include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}/bullet
   ${CMAKE_CURRENT_SOURCE_DIR}/bullet/BulletCollision/BroadphaseCollision
   ${CMAKE_CURRENT_SOURCE_DIR}/bullet/BulletCollision/CollisionDispatch
   ${CMAKE_CURRENT_SOURCE_DIR}/bullet/BulletCollision/CollisionShapes
   ${CMAKE_CURRENT_SOURCE_DIR}/bullet/BulletCollision/Gimpact
   ${CMAKE_CURRENT_SOURCE_DIR}/bullet/BulletCollision/NarrowPhaseCollision
   ${CMAKE_CURRENT_SOURCE_DIR}/bullet/BulletDynamics/Character
   ${CMAKE_CURRENT_SOURCE_DIR}/bullet/BulletDynamics/ConstraintSolver
   ${CMAKE_CURRENT_SOURCE_DIR}/bullet/BulletDynamics/Dynamics
   ${CMAKE_CURRENT_SOURCE_DIR}/bullet/BulletDynamics/Vehicle
   ${CMAKE_CURRENT_SOURCE_DIR}/bullet/LinearMath)

set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET
   bullet/btBulletCollisionCommon.h
   bullet/btBulletDynamicsCommon.h)
   
set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_BROADPHASECOLLISION
   bullet/BulletCollision/BroadphaseCollision/btAxisSweep3.h
   bullet/BulletCollision/BroadphaseCollision/btAxisSweep3Internal.h
   bullet/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h
   bullet/BulletCollision/BroadphaseCollision/btBroadphaseProxy.h
   bullet/BulletCollision/BroadphaseCollision/btCollisionAlgorithm.h
   bullet/BulletCollision/BroadphaseCollision/btDbvt.h
   bullet/BulletCollision/BroadphaseCollision/btDbvtBroadphase.h
   bullet/BulletCollision/BroadphaseCollision/btDispatcher.h
   bullet/BulletCollision/BroadphaseCollision/btOverlappingPairCache.h
   bullet/BulletCollision/BroadphaseCollision/btOverlappingPairCallback.h
   bullet/BulletCollision/BroadphaseCollision/btQuantizedBvh.h
   bullet/BulletCollision/BroadphaseCollision/btSimpleBroadphase.h)
   
set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_COLLISIONDISPATCH   
   bullet/BulletCollision/CollisionDispatch/btActivatingCollisionAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btBoxBoxCollisionAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btBox2dBox2dCollisionAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btBoxBoxDetector.h
   bullet/BulletCollision/CollisionDispatch/btCollisionConfiguration.h
   bullet/BulletCollision/CollisionDispatch/btCollisionCreateFunc.h
   bullet/BulletCollision/CollisionDispatch/btCollisionDispatcher.h
   bullet/BulletCollision/CollisionDispatch/btCollisionDispatcherMt.h
   bullet/BulletCollision/CollisionDispatch/btCollisionObject.h
   bullet/BulletCollision/CollisionDispatch/btCollisionObjectWrapper.h
   bullet/BulletCollision/CollisionDispatch/btCollisionWorld.h
   bullet/BulletCollision/CollisionDispatch/btCollisionWorldImporter.h
   bullet/BulletCollision/CollisionDispatch/btCompoundCollisionAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btCompoundCompoundCollisionAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btConvexConcaveCollisionAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btConvexConvexAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btConvex2dConvex2dAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btConvexPlaneCollisionAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h
   bullet/BulletCollision/CollisionDispatch/btEmptyCollisionAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btGhostObject.h
   bullet/BulletCollision/CollisionDispatch/btHashedSimplePairCache.h
   bullet/BulletCollision/CollisionDispatch/btInternalEdgeUtility.h
   bullet/BulletCollision/CollisionDispatch/btManifoldResult.h
   bullet/BulletCollision/CollisionDispatch/btSimulationIslandManager.h
   bullet/BulletCollision/CollisionDispatch/btSphereBoxCollisionAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btSphereTriangleCollisionAlgorithm.h
   bullet/BulletCollision/CollisionDispatch/btUnionFind.h
   bullet/BulletCollision/CollisionDispatch/SphereTriangleDetector.h)
   
set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_COLLISIONSHAPES   
   bullet/BulletCollision/CollisionShapes/btBoxShape.h
   bullet/BulletCollision/CollisionShapes/btBox2dShape.h
   bullet/BulletCollision/CollisionShapes/btBvhTriangleMeshShape.h
   bullet/BulletCollision/CollisionShapes/btCapsuleShape.h
   bullet/BulletCollision/CollisionShapes/btCollisionMargin.h
   bullet/BulletCollision/CollisionShapes/btCollisionShape.h
   bullet/BulletCollision/CollisionShapes/btCompoundShape.h
   bullet/BulletCollision/CollisionShapes/btConcaveShape.h
   bullet/BulletCollision/CollisionShapes/btConeShape.h
   bullet/BulletCollision/CollisionShapes/btConvexHullShape.h
   bullet/BulletCollision/CollisionShapes/btConvexInternalShape.h
   bullet/BulletCollision/CollisionShapes/btConvexPointCloudShape.h
   bullet/BulletCollision/CollisionShapes/btConvexPolyhedron.h
   bullet/BulletCollision/CollisionShapes/btConvexShape.h
   bullet/BulletCollision/CollisionShapes/btConvex2dShape.h
   bullet/BulletCollision/CollisionShapes/btConvexTriangleMeshShape.h
   bullet/BulletCollision/CollisionShapes/btCylinderShape.h
   bullet/BulletCollision/CollisionShapes/btEmptyShape.h
   bullet/BulletCollision/CollisionShapes/btHeightfieldTerrainShape.h
   bullet/BulletCollision/CollisionShapes/btMaterial.h
   bullet/BulletCollision/CollisionShapes/btMiniSDF.h
   bullet/BulletCollision/CollisionShapes/btMinkowskiSumShape.h
   bullet/BulletCollision/CollisionShapes/btMultimaterialTriangleMeshShape.h
   bullet/BulletCollision/CollisionShapes/btMultiSphereShape.h
   bullet/BulletCollision/CollisionShapes/btOptimizedBvh.h
   bullet/BulletCollision/CollisionShapes/btPolyhedralConvexShape.h
   bullet/BulletCollision/CollisionShapes/btScaledBvhTriangleMeshShape.h
   bullet/BulletCollision/CollisionShapes/btSdfCollisionShape.h
   bullet/BulletCollision/CollisionShapes/btShapeHull.h
   bullet/BulletCollision/CollisionShapes/btSphereShape.h
   bullet/BulletCollision/CollisionShapes/btStaticPlaneShape.h
   bullet/BulletCollision/CollisionShapes/btStridingMeshInterface.h
   bullet/BulletCollision/CollisionShapes/btTetrahedronShape.h
   bullet/BulletCollision/CollisionShapes/btTriangleBuffer.h
   bullet/BulletCollision/CollisionShapes/btTriangleCallback.h
   bullet/BulletCollision/CollisionShapes/btTriangleIndexVertexArray.h
   bullet/BulletCollision/CollisionShapes/btTriangleIndexVertexMaterialArray.h
   bullet/BulletCollision/CollisionShapes/btTriangleInfoMap.h
   bullet/BulletCollision/CollisionShapes/btTriangleMesh.h
   bullet/BulletCollision/CollisionShapes/btTriangleMeshShape.h
   bullet/BulletCollision/CollisionShapes/btTriangleShape.h
   bullet/BulletCollision/CollisionShapes/btUniformScalingShape.h)
   
set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_GIMPACT
   bullet/BulletCollision/Gimpact/btBoxCollision.h
   bullet/BulletCollision/Gimpact/btClipPolygon.h
   bullet/BulletCollision/Gimpact/btCompoundFromGimpact.h
   bullet/BulletCollision/Gimpact/btContactProcessing.h
   bullet/BulletCollision/Gimpact/btContactProcessingStructs.h
   bullet/BulletCollision/Gimpact/btGenericPoolAllocator.h
   bullet/BulletCollision/Gimpact/btGeometryOperations.h
   bullet/BulletCollision/Gimpact/btGImpactBvh.h
   bullet/BulletCollision/Gimpact/btGImpactBvhStructs.h
   bullet/BulletCollision/Gimpact/btGImpactCollisionAlgorithm.h
   bullet/BulletCollision/Gimpact/btGImpactMassUtil.h
   bullet/BulletCollision/Gimpact/btGImpactQuantizedBvh.h
   bullet/BulletCollision/Gimpact/btGImpactQuantizedBvhStructs.h
   bullet/BulletCollision/Gimpact/btGImpactShape.h
   bullet/BulletCollision/Gimpact/btQuantization.h
   bullet/BulletCollision/Gimpact/btTriangleShapeEx.h
   bullet/BulletCollision/Gimpact/gim_array.h
   bullet/BulletCollision/Gimpact/gim_basic_geometry_operations.h
   bullet/BulletCollision/Gimpact/gim_bitset.h
   bullet/BulletCollision/Gimpact/gim_box_collision.h
   bullet/BulletCollision/Gimpact/gim_box_set.h
   bullet/BulletCollision/Gimpact/gim_clip_polygon.h
   bullet/BulletCollision/Gimpact/gim_contact.h
   bullet/BulletCollision/Gimpact/gim_geom_types.h
   bullet/BulletCollision/Gimpact/gim_geometry.h
   bullet/BulletCollision/Gimpact/gim_hash_table.h
   bullet/BulletCollision/Gimpact/gim_linear_math.h
   bullet/BulletCollision/Gimpact/gim_math.h
   bullet/BulletCollision/Gimpact/gim_memory.h
   bullet/BulletCollision/Gimpact/gim_pair.h
   bullet/BulletCollision/Gimpact/gim_radixsort.h
   bullet/BulletCollision/Gimpact/gim_tri_collision.h)

set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_NARROWPHASECOLLISION
   bullet/BulletCollision/NarrowPhaseCollision/btComputeGjkEpaPenetration.h
   bullet/BulletCollision/NarrowPhaseCollision/btContinuousConvexCollision.h
   bullet/BulletCollision/NarrowPhaseCollision/btConvexCast.h
   bullet/BulletCollision/NarrowPhaseCollision/btConvexPenetrationDepthSolver.h
   bullet/BulletCollision/NarrowPhaseCollision/btDiscreteCollisionDetectorInterface.h
   bullet/BulletCollision/NarrowPhaseCollision/btGjkCollisionDescription.h
   bullet/BulletCollision/NarrowPhaseCollision/btGjkConvexCast.h
   bullet/BulletCollision/NarrowPhaseCollision/btGjkEpa2.h
   bullet/BulletCollision/NarrowPhaseCollision/btGjkEpa3.h
   bullet/BulletCollision/NarrowPhaseCollision/btGjkEpaPenetrationDepthSolver.h
   bullet/BulletCollision/NarrowPhaseCollision/btGjkPairDetector.h
   bullet/BulletCollision/NarrowPhaseCollision/btManifoldPoint.h
   bullet/BulletCollision/NarrowPhaseCollision/btMinkowskiPenetrationDepthSolver.h
   bullet/BulletCollision/NarrowPhaseCollision/btMprPenetration.h
   bullet/BulletCollision/NarrowPhaseCollision/btPersistentManifold.h
   bullet/BulletCollision/NarrowPhaseCollision/btPointCollector.h
   bullet/BulletCollision/NarrowPhaseCollision/btRaycastCallback.h
   bullet/BulletCollision/NarrowPhaseCollision/btSimplexSolverInterface.h
   bullet/BulletCollision/NarrowPhaseCollision/btSubSimplexConvexCast.h
   bullet/BulletCollision/NarrowPhaseCollision/btVoronoiSimplexSolver.h
   bullet/BulletCollision/NarrowPhaseCollision/btPolyhedralContactClipping.h)

set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_CHARACTER
   bullet/BulletDynamics/Character/btCharacterControllerInterface.h
   bullet/BulletDynamics/Character/btKinematicCharacterController.h)

set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_CONSTRAINTSOLVER
   bullet/BulletDynamics/ConstraintSolver/btBatchedConstraints.h
   bullet/BulletDynamics/ConstraintSolver/btConeTwistConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btConstraintSolver.h
   bullet/BulletDynamics/ConstraintSolver/btContactConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btContactSolverInfo.h
   bullet/BulletDynamics/ConstraintSolver/btFixedConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btGearConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btGeneric6DofSpring2Constraint.h
   bullet/BulletDynamics/ConstraintSolver/btHinge2Constraint.h
   bullet/BulletDynamics/ConstraintSolver/btHingeConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btJacobianEntry.h
   bullet/BulletDynamics/ConstraintSolver/btNNCGConstraintSolver.h
   bullet/BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h
   bullet/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolverMt.h
   bullet/BulletDynamics/ConstraintSolver/btSliderConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btSolve2LinearConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btSolverBody.h
   bullet/BulletDynamics/ConstraintSolver/btSolverConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btTypedConstraint.h
   bullet/BulletDynamics/ConstraintSolver/btUniversalConstraint.h)

set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_DYNAMICS
   bullet/BulletDynamics/Dynamics/btActionInterface.h
   bullet/BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h
   bullet/BulletDynamics/Dynamics/btDiscreteDynamicsWorldMt.h
   bullet/BulletDynamics/Dynamics/btDynamicsWorld.h
   bullet/BulletDynamics/Dynamics/btSimpleDynamicsWorld.h
   bullet/BulletDynamics/Dynamics/btSimulationIslandManagerMt.h
   bullet/BulletDynamics/Dynamics/btRigidBody.h)

set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_FEATHERSTONE
   bullet/BulletDynamics/Featherstone/btMultiBody.h
   bullet/BulletDynamics/Featherstone/btMultiBodyConstraint.h
   bullet/BulletDynamics/Featherstone/btMultiBodyConstraintSolver.h
   bullet/BulletDynamics/Featherstone/btMultiBodyDynamicsWorld.h
   bullet/BulletDynamics/Featherstone/btMultiBodyFixedConstraint.h
   bullet/BulletDynamics/Featherstone/btMultiBodyGearConstraint.h
   bullet/BulletDynamics/Featherstone/btMultiBodyInplaceSolverIslandCallback.h
   bullet/BulletDynamics/Featherstone/btMultiBodyJointFeedback.h
   bullet/BulletDynamics/Featherstone/btMultiBodyJointLimitConstraint.h
   bullet/BulletDynamics/Featherstone/btMultiBodyJointMotor.h
   bullet/BulletDynamics/Featherstone/btMultiBodyLink.h
   bullet/BulletDynamics/Featherstone/btMultiBodyLinkCollider.h
   bullet/BulletDynamics/Featherstone/btMultiBodyMLCPConstraintSolver.h
   bullet/BulletDynamics/Featherstone/btMultiBodyPoint2Point.h
   bullet/BulletDynamics/Featherstone/btMultiBodySliderConstraint.h
   bullet/BulletDynamics/Featherstone/btMultiBodySolverConstraint.h
   bullet/BulletDynamics/Featherstone/btMultiBodySphericalJointMotor.h)

set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_MLCPSOLVERS
   bullet/BulletDynamics/MLCPSolvers/btDantzigLCP.h
   bullet/BulletDynamics/MLCPSolvers/btDantzigSolver.h
   bullet/BulletDynamics/MLCPSolvers/btLemkeAlgorithm.h
   bullet/BulletDynamics/MLCPSolvers/btLemkeSolver.h
   bullet/BulletDynamics/MLCPSolvers/btMLCPSolver.h
   bullet/BulletDynamics/MLCPSolvers/btMLCPSolverInterface.h
   bullet/BulletDynamics/MLCPSolvers/btPATHSolver.h
   bullet/BulletDynamics/MLCPSolvers/btSolveProjectedGaussSeidel.h)

set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_VEHICLE
   bullet/BulletDynamics/Vehicle/btRaycastVehicle.h
   bullet/BulletDynamics/Vehicle/btVehicleRaycaster.h
   bullet/BulletDynamics/Vehicle/btWheelInfo.h)

set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_LINEARMATH
   bullet/LinearMath/btAabbUtil2.h
   bullet/LinearMath/btAlignedAllocator.h
   bullet/LinearMath/btAlignedObjectArray.h
   bullet/LinearMath/btConvexHull.h
   bullet/LinearMath/btConvexHullComputer.h
   bullet/LinearMath/btCpuFeatureUtility.h
   bullet/LinearMath/btDefaultMotionState.h
   bullet/LinearMath/btGeometryUtil.h
   bullet/LinearMath/btGrahamScan2dConvexHull.h
   bullet/LinearMath/btHashMap.h
   bullet/LinearMath/btIDebugDraw.h
   bullet/LinearMath/btImplicitQRSVD.h
   bullet/LinearMath/btList.h
   bullet/LinearMath/btMatrix3x3.h
   bullet/LinearMath/btMatrixX.h
   bullet/LinearMath/btMinMax.h
   bullet/LinearMath/btModifiedGramSchmidt.h
   bullet/LinearMath/btMotionState.h
   bullet/LinearMath/btPolarDecomposition.h
   bullet/LinearMath/btPoolAllocator.h
   bullet/LinearMath/btQuadWord.h
   bullet/LinearMath/btQuaternion.h
   bullet/LinearMath/btQuickprof.h
   bullet/LinearMath/btRandom.h
   bullet/LinearMath/btReducedVector.h
   bullet/LinearMath/btScalar.h
   bullet/LinearMath/btSerializer.h
   bullet/LinearMath/btSpatialAlgebra.h
   bullet/LinearMath/btStackAlloc.h
   bullet/LinearMath/btThreads.h
   bullet/LinearMath/btTransform.h
   bullet/LinearMath/btTransformUtil.h
   bullet/LinearMath/btVector3.h)

set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_LINEARMATH_TASKSCHEDULER
   bullet/LinearMath/TaskScheduler/btThreadSupportInterface.h)

#
# Sources
#
# Sources of the bullet physics engine
set(ARGOS3_SOURCES_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET}
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_BROADPHASECOLLISION}
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_COLLISIONDISPATCH}   
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_COLLISIONSHAPES}   
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_GIMPACT}
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_NARROWPHASECOLLISION}
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_CHARACTER}
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_CONSTRAINTSOLVER}
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_DYNAMICS}
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_FEATHERSTONE}
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_MLCPSOLVERS}
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_VEHICLE}
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_LINEARMATH}
   ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_LINEARMATH_TASKSCHEDULER}
   bullet/BulletCollision/BroadphaseCollision/btAxisSweep3.cpp
   bullet/BulletCollision/BroadphaseCollision/btBroadphaseProxy.cpp
   bullet/BulletCollision/BroadphaseCollision/btCollisionAlgorithm.cpp
   bullet/BulletCollision/BroadphaseCollision/btDbvt.cpp
   bullet/BulletCollision/BroadphaseCollision/btDbvtBroadphase.cpp
   bullet/BulletCollision/BroadphaseCollision/btDispatcher.cpp
   bullet/BulletCollision/BroadphaseCollision/btOverlappingPairCache.cpp
   bullet/BulletCollision/BroadphaseCollision/btQuantizedBvh.cpp
   bullet/BulletCollision/BroadphaseCollision/btSimpleBroadphase.cpp
   bullet/BulletCollision/CollisionDispatch/btActivatingCollisionAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btBoxBoxCollisionAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btBox2dBox2dCollisionAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btBoxBoxDetector.cpp
   bullet/BulletCollision/CollisionDispatch/btCollisionDispatcher.cpp
   bullet/BulletCollision/CollisionDispatch/btCollisionDispatcherMt.cpp
   bullet/BulletCollision/CollisionDispatch/btCollisionObject.cpp
   bullet/BulletCollision/CollisionDispatch/btCollisionWorld.cpp
   bullet/BulletCollision/CollisionDispatch/btCollisionWorldImporter.cpp
   bullet/BulletCollision/CollisionDispatch/btCompoundCollisionAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btCompoundCompoundCollisionAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btConvexConcaveCollisionAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btConvexConvexAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btConvexPlaneCollisionAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btConvex2dConvex2dAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.cpp
   bullet/BulletCollision/CollisionDispatch/btEmptyCollisionAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btGhostObject.cpp
   bullet/BulletCollision/CollisionDispatch/btHashedSimplePairCache.cpp
   bullet/BulletCollision/CollisionDispatch/btInternalEdgeUtility.cpp
   bullet/BulletCollision/CollisionDispatch/btInternalEdgeUtility.h
   bullet/BulletCollision/CollisionDispatch/btManifoldResult.cpp
   bullet/BulletCollision/CollisionDispatch/btSimulationIslandManager.cpp
   bullet/BulletCollision/CollisionDispatch/btSphereBoxCollisionAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btSphereTriangleCollisionAlgorithm.cpp
   bullet/BulletCollision/CollisionDispatch/btUnionFind.cpp
   bullet/BulletCollision/CollisionDispatch/SphereTriangleDetector.cpp
   bullet/BulletCollision/CollisionShapes/btBoxShape.cpp
   bullet/BulletCollision/CollisionShapes/btBox2dShape.cpp
   bullet/BulletCollision/CollisionShapes/btBvhTriangleMeshShape.cpp
   bullet/BulletCollision/CollisionShapes/btCapsuleShape.cpp
   bullet/BulletCollision/CollisionShapes/btCollisionShape.cpp
   bullet/BulletCollision/CollisionShapes/btCompoundShape.cpp
   bullet/BulletCollision/CollisionShapes/btConcaveShape.cpp
   bullet/BulletCollision/CollisionShapes/btConeShape.cpp
   bullet/BulletCollision/CollisionShapes/btConvexHullShape.cpp
   bullet/BulletCollision/CollisionShapes/btConvexInternalShape.cpp
   bullet/BulletCollision/CollisionShapes/btConvexPointCloudShape.cpp
   bullet/BulletCollision/CollisionShapes/btConvexPolyhedron.cpp
   bullet/BulletCollision/CollisionShapes/btConvexShape.cpp
   bullet/BulletCollision/CollisionShapes/btConvex2dShape.cpp
   bullet/BulletCollision/CollisionShapes/btConvexTriangleMeshShape.cpp
   bullet/BulletCollision/CollisionShapes/btCylinderShape.cpp
   bullet/BulletCollision/CollisionShapes/btEmptyShape.cpp
   bullet/BulletCollision/CollisionShapes/btHeightfieldTerrainShape.cpp
   bullet/BulletCollision/CollisionShapes/btMiniSDF.cpp
   bullet/BulletCollision/CollisionShapes/btMinkowskiSumShape.cpp
   bullet/BulletCollision/CollisionShapes/btMultimaterialTriangleMeshShape.cpp
   bullet/BulletCollision/CollisionShapes/btMultiSphereShape.cpp
   bullet/BulletCollision/CollisionShapes/btOptimizedBvh.cpp
   bullet/BulletCollision/CollisionShapes/btPolyhedralConvexShape.cpp
   bullet/BulletCollision/CollisionShapes/btScaledBvhTriangleMeshShape.cpp
   bullet/BulletCollision/CollisionShapes/btSdfCollisionShape.cpp
   bullet/BulletCollision/CollisionShapes/btShapeHull.cpp
   bullet/BulletCollision/CollisionShapes/btSphereShape.cpp
   bullet/BulletCollision/CollisionShapes/btStaticPlaneShape.cpp
   bullet/BulletCollision/CollisionShapes/btStridingMeshInterface.cpp
   bullet/BulletCollision/CollisionShapes/btTetrahedronShape.cpp
   bullet/BulletCollision/CollisionShapes/btTriangleBuffer.cpp
   bullet/BulletCollision/CollisionShapes/btTriangleCallback.cpp
   bullet/BulletCollision/CollisionShapes/btTriangleIndexVertexArray.cpp
   bullet/BulletCollision/CollisionShapes/btTriangleIndexVertexMaterialArray.cpp
   bullet/BulletCollision/CollisionShapes/btTriangleMesh.cpp
   bullet/BulletCollision/CollisionShapes/btTriangleMeshShape.cpp
   bullet/BulletCollision/CollisionShapes/btUniformScalingShape.cpp
   bullet/BulletCollision/Gimpact/btContactProcessing.cpp
   bullet/BulletCollision/Gimpact/btGenericPoolAllocator.cpp
   bullet/BulletCollision/Gimpact/btGImpactBvh.cpp
   bullet/BulletCollision/Gimpact/btGImpactCollisionAlgorithm.cpp
   bullet/BulletCollision/Gimpact/btGImpactQuantizedBvh.cpp
   bullet/BulletCollision/Gimpact/btGImpactShape.cpp
   bullet/BulletCollision/Gimpact/btTriangleShapeEx.cpp
   bullet/BulletCollision/Gimpact/gim_box_set.cpp
   bullet/BulletCollision/Gimpact/gim_contact.cpp
   bullet/BulletCollision/Gimpact/gim_memory.cpp
   bullet/BulletCollision/Gimpact/gim_tri_collision.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btContinuousConvexCollision.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btConvexCast.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btGjkConvexCast.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btGjkEpa2.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btGjkEpaPenetrationDepthSolver.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btGjkPairDetector.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btMinkowskiPenetrationDepthSolver.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btPersistentManifold.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btRaycastCallback.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btSubSimplexConvexCast.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btVoronoiSimplexSolver.cpp
   bullet/BulletCollision/NarrowPhaseCollision/btPolyhedralContactClipping.cpp
   bullet/BulletDynamics/Character/btKinematicCharacterController.cpp
   bullet/BulletDynamics/ConstraintSolver/btBatchedConstraints.cpp
   bullet/BulletDynamics/ConstraintSolver/btConeTwistConstraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btContactConstraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btGearConstraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btGeneric6DofSpring2Constraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btHinge2Constraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btHingeConstraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btFixedConstraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btNNCGConstraintSolver.cpp
   bullet/BulletDynamics/ConstraintSolver/btPoint2PointConstraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.cpp
   bullet/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolverMt.cpp
   bullet/BulletDynamics/ConstraintSolver/btSliderConstraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btSolve2LinearConstraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btTypedConstraint.cpp
   bullet/BulletDynamics/ConstraintSolver/btUniversalConstraint.cpp
   bullet/BulletDynamics/Dynamics/btDiscreteDynamicsWorld.cpp
   bullet/BulletDynamics/Dynamics/btDiscreteDynamicsWorldMt.cpp
   bullet/BulletDynamics/Dynamics/btRigidBody.cpp
   bullet/BulletDynamics/Dynamics/btSimpleDynamicsWorld.cpp
   bullet/BulletDynamics/Dynamics/btSimulationIslandManagerMt.cpp
   bullet/BulletDynamics/Featherstone/btMultiBody.cpp
   bullet/BulletDynamics/Featherstone/btMultiBodyConstraint.cpp
   bullet/BulletDynamics/Featherstone/btMultiBodyConstraintSolver.cpp
   bullet/BulletDynamics/Featherstone/btMultiBodyDynamicsWorld.cpp
   bullet/BulletDynamics/Featherstone/btMultiBodyFixedConstraint.cpp
   bullet/BulletDynamics/Featherstone/btMultiBodyGearConstraint.cpp
   bullet/BulletDynamics/Featherstone/btMultiBodyJointLimitConstraint.cpp
   bullet/BulletDynamics/Featherstone/btMultiBodyJointMotor.cpp
   bullet/BulletDynamics/Featherstone/btMultiBodyMLCPConstraintSolver.cpp
   bullet/BulletDynamics/Featherstone/btMultiBodyPoint2Point.cpp
   bullet/BulletDynamics/Featherstone/btMultiBodySliderConstraint.cpp
   bullet/BulletDynamics/Featherstone/btMultiBodySphericalJointMotor.cpp
   bullet/BulletDynamics/MLCPSolvers/btDantzigLCP.cpp
   bullet/BulletDynamics/MLCPSolvers/btLemkeAlgorithm.cpp
   bullet/BulletDynamics/MLCPSolvers/btMLCPSolver.cpp
   bullet/BulletDynamics/Vehicle/btRaycastVehicle.cpp
   bullet/BulletDynamics/Vehicle/btWheelInfo.cpp
   bullet/LinearMath/btAlignedAllocator.cpp
   bullet/LinearMath/btConvexHull.cpp
   bullet/LinearMath/btConvexHullComputer.cpp
   bullet/LinearMath/btGeometryUtil.cpp
   bullet/LinearMath/btPolarDecomposition.cpp
   bullet/LinearMath/btQuickprof.cpp
   bullet/LinearMath/btReducedVector.cpp
   bullet/LinearMath/btSerializer.cpp
   bullet/LinearMath/btSerializer64.cpp
   bullet/LinearMath/btThreads.cpp
   bullet/LinearMath/btVector3.cpp
   bullet/LinearMath/TaskScheduler/btTaskScheduler.cpp
   bullet/LinearMath/TaskScheduler/btThreadSupportPosix.cpp
   bullet/LinearMath/TaskScheduler/btThreadSupportWin32.cpp)

#
# Disable warnings from inside the Bullet Physics SDK
#
if(APPLE)
  set_source_files_properties(
    ${ARGOS3_SOURCES_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET}
    PROPERTIES
    COMPILE_FLAGS "-Wno-everything")
else(APPLE)
  set_source_files_properties(
    ${ARGOS3_SOURCES_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET}
    PROPERTIES
    COMPILE_FLAGS "-w")
endif(APPLE)

#
# Header files
#
set(ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D
  dynamics3d_engine.h
  dynamics3d_shape_manager.h
  dynamics3d_model.h
  dynamics3d_single_body_object_model.h
  dynamics3d_box_model.h
  dynamics3d_cylinder_model.h
  dynamics3d_multi_body_object_model.h
  dynamics3d_plugin.h)

#
# Source files
#
set(ARGOS3_SOURCES_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D
  dynamics3d_engine.cpp
  dynamics3d_shape_manager.cpp
  dynamics3d_model.cpp
  dynamics3d_single_body_object_model.cpp
  dynamics3d_box_model.cpp
  dynamics3d_cylinder_model.cpp
  dynamics3d_multi_body_object_model.cpp)

#
# Create a library for the dynamics3d engine
#
add_library(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d SHARED
  ${ARGOS3_SOURCES_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET}
  ${ARGOS3_SOURCES_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D})
# Use double precision if ARGoS is using double precision
if(ARGOS_USE_DOUBLE)
   target_compile_definitions(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d PUBLIC BT_USE_DOUBLE_PRECISION)
endif(ARGOS_USE_DOUBLE)
# Disable Bullet's inbuilt profiler
target_compile_definitions(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d PUBLIC BT_NO_PROFILE=1)

#
# Create libraries for the dynamics3d engine's plugins
#
add_library(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_floor SHARED
  dynamics3d_floor_plugin.cpp
  dynamics3d_floor_plugin.h)
# Use double precision if ARGoS is using double precision
if(ARGOS_USE_DOUBLE)
   target_compile_definitions(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_floor PUBLIC BT_USE_DOUBLE_PRECISION)
endif(ARGOS_USE_DOUBLE)
# Disable Bullet's inbuilt profiler
target_compile_definitions(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_floor PUBLIC BT_NO_PROFILE=1)
target_link_libraries(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_floor
  argos3core_${ARGOS_BUILD_FOR}
  argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d)
add_library(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_gravity SHARED
  dynamics3d_gravity_plugin.cpp
  dynamics3d_gravity_plugin.h)
# Use double precision if ARGoS is using double precision
if(ARGOS_USE_DOUBLE)
   target_compile_definitions(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_gravity PUBLIC BT_USE_DOUBLE_PRECISION)
endif(ARGOS_USE_DOUBLE)
# Disable Bullet's inbuilt profiler
target_compile_definitions(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_gravity PUBLIC BT_NO_PROFILE=1)
target_link_libraries(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_gravity
  argos3core_${ARGOS_BUILD_FOR}
  argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d)
add_library(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_magnetism SHARED
  dynamics3d_magnetism_plugin.cpp
  dynamics3d_magnetism_plugin.h)
# Use double precision if ARGoS is using double precision
if(ARGOS_USE_DOUBLE)
   target_compile_definitions(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_magnetism PUBLIC BT_USE_DOUBLE_PRECISION)
endif(ARGOS_USE_DOUBLE)
# Disable Bullet's inbuilt profiler
target_compile_definitions(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_magnetism PUBLIC BT_NO_PROFILE=1)
target_link_libraries(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_magnetism
  argos3core_${ARGOS_BUILD_FOR}
  argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d)
add_library(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_srocs SHARED
  dynamics3d_srocs_plugin.cpp
  dynamics3d_srocs_plugin.h)
# Use double precision if ARGoS is using double precision
if(ARGOS_USE_DOUBLE)
   target_compile_definitions(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_srocs PUBLIC BT_USE_DOUBLE_PRECISION)
endif(ARGOS_USE_DOUBLE)
# Disable Bullet's inbuilt profiler
target_compile_definitions(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_srocs PUBLIC BT_NO_PROFILE=1)
target_link_libraries(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_srocs
  argos3core_${ARGOS_BUILD_FOR}
  argos3plugin_${ARGOS_BUILD_FOR}_builderbot
  argos3plugin_${ARGOS_BUILD_FOR}_block
  argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d)

#
# Add plugin to ARGOS_PLUGIN_PATH
#
set(ARGOS_PLUGIN_PATH "${ARGOS_PLUGIN_PATH}:${CMAKE_CURRENT_BINARY_DIR}" CACHE INTERNAL "ARGoS plugin path")

target_link_libraries(argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d
  argos3core_${ARGOS_BUILD_FOR}
  argos3plugin_${ARGOS_BUILD_FOR}_entities)
install(
  FILES
  bullet/LICENSE.txt
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_BROADPHASECOLLISION}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/BulletCollision/BroadphaseCollision)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_COLLISIONDISPATCH}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/BulletCollision/CollisionDispatch)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_COLLISIONSHAPES}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/BulletCollision/CollisionShapes)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_GIMPACT}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/BulletCollision/Gimpact)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETCOLLISION_NARROWPHASECOLLISION}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/BulletCollision/NarrowPhaseCollision)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_CHARACTER}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/BulletDynamics/Character)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_CONSTRAINTSOLVER}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/BulletDynamics/ConstraintSolver)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_DYNAMICS}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/BulletDynamics/Dynamics)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_FEATHERSTONE}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/BulletDynamics/Featherstone)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_MLCPSOLVERS}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/BulletDynamics/MLCPSolvers)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_BULLETDYNAMICS_VEHICLE}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/BulletDynamics/Vehicle)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_LINEARMATH}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/LinearMath)
install(
  FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D_BULLET_LINEARMATH_TASKSCHEDULER}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d/bullet/LinearMath/TaskScheduler)
install(FILES
  ${ARGOS3_HEADERS_PLUGINS_SIMULATOR_PHYSICS_ENGINES_DYNAMICS3D}
  DESTINATION
  include/argos3/plugins/simulator/physics_engines/dynamics3d)
install(TARGETS
  argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d
  argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_floor
  argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_gravity
  argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_magnetism
  argos3plugin_${ARGOS_BUILD_FOR}_dynamics3d_srocs
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib/argos3
  ARCHIVE DESTINATION lib/argos3)
