#pragma once

#include "Hedgehog/Base/Container/hhMap.h"
#include "Hedgehog/Base/Container/hhVector.h"
#include "Hedgehog/Base/System/hhAllocator.h"
#include "Hedgehog/Base/System/hhSymbol.h"
#include "Hedgehog/Base/Thread/hhHolder.h"
#include "Hedgehog/Base/Thread/hhHolderBase.h"
#include "Hedgehog/Base/Thread/hhSynchronizedObject.h"
#include "Hedgehog/Base/Thread/hhSynchronizedPtr.h"
#include "Hedgehog/Base/Type/detail/hhStringHolder.h"
#include "Hedgehog/Base/Type/hhSharedString.h"
#include "Hedgehog/Base/hhObject.h"
#include "Hedgehog/Database/System/hhDatabaseData.h"
#include "Hedgehog/Math/Matrix.h"
#include "Hedgehog/Math/Quaternion.h"
#include "Hedgehog/Math/Vector.h"
#include "Hedgehog/MirageCore/MatrixNode/hhMatrixNode.h"
#include "Hedgehog/MirageCore/Misc/hhTransform.h"
#include "Hedgehog/MirageCore/Misc/hhVertexDeclarationPtr.h"
#include "Hedgehog/MirageCore/RenderData/hhMaterialData.h"
#include "Hedgehog/MirageCore/RenderData/hhMeshData.h"
#include "Hedgehog/MirageCore/RenderData/hhMeshIndexData.h"
#include "Hedgehog/MirageCore/RenderData/hhModelData.h"
#include "Hedgehog/MirageCore/RenderData/hhMorphModelData.h"
#include "Hedgehog/MirageCore/RenderData/hhNodeGroupModelData.h"
#include "Hedgehog/MirageCore/RenderData/hhPixelShaderCodeData.h"
#include "Hedgehog/MirageCore/RenderData/hhPixelShaderData.h"
#include "Hedgehog/MirageCore/RenderData/hhShaderListData.h"
#include "Hedgehog/MirageCore/RenderData/hhTerrainModelData.h"
#include "Hedgehog/MirageCore/RenderData/hhTexsetData.h"
#include "Hedgehog/MirageCore/RenderData/hhTextureData.h"
#include "Hedgehog/MirageCore/RenderData/hhVertexShaderCodeData.h"
#include "Hedgehog/MirageCore/RenderData/hhVertexShaderData.h"
#include "Hedgehog/MirageCore/Renderable/hhRenderable.h"
#include "Hedgehog/Sparkle/hhParticleMaterial.h"
#include "Hedgehog/Universe/Engine/hhMessageActor.h"
#include "Hedgehog/Universe/Engine/hhMessageProcess.h"
#include "Hedgehog/Universe/Engine/hhStateMachineBase.h"
#include "Hedgehog/Universe/Engine/hhStateMachineMessageReceiver.h"
#include "Hedgehog/Universe/Engine/hhUpdateInfo.h"
#include "Hedgehog/Universe/Engine/hhUpdateUnit.h"
#include "Hedgehog/Universe/Thread/hhParallelJob.h"
#include "boost/smart_ptr/make_shared_object.h"
#include "boost/smart_ptr/shared_ptr.h"
