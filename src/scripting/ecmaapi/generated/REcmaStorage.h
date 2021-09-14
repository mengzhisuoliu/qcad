// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASTORAGE_H
        #define RECMASTORAGE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RStorage.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaStorage {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRRequireHeap(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        setDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        beginTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        commitTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rollbackTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        orderBackToFront
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        sortBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        sortLayers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllObjects
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllVisibleEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryWorkingSetEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllUcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllLayers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllLayerStates
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllLayoutBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllLayouts
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllViews
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllLinetypes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        querySelectedLayerEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasBlockEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerBlockEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryChildEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasChildEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockReferences
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllBlockReferences
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllViewports
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        querySelectedEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        querySelectedLayers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryInfiniteEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryDocumentVariables
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryDocumentVariablesDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryDimStyle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryDimStyleDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObjectDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObjectByHandle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryEntityDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryVisibleEntityDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryUcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryUcsDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryCurrentLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerState
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerStateDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayout
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayoutDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryCurrentView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLinetypeDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLinetype
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLayerId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentViewId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLinetype
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLinetypePattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLinetypePattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryCurrentLinetype
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryCurrentBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentViewport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unsetCurrentViewport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentViewportId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setModelSpaceBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getModelSpaceBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        startDocumentVariablesTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        endDocumentVariablesTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUnit
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getUnit
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMeasurement
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMeasurement
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDimensionFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimensionFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLinetypeScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockNameFromHandle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockNameFromLayout
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockIdAuto
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLayer0Id
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayer0Id
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerStateName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerStateNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerStateId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasLayerStates
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasLayerState
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayoutName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayoutNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayoutId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasLayout
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeDescription
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypePatterns
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasLinetype
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVariables
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setKnownVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getKnownVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        countSelectedEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearEntitySelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectAllEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deselectEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deselectEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSelected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSelectedWorkingSet
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLayerLocked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isParentLayerLocked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLayerOff
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLayerOffOrFrozen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLayerFrozen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isParentLayerFrozen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLayerSnappable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isParentLayerSnappable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLayerPlottable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isParentLayerPlottable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isEntityVisible
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isBlockFrozen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLayoutBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setObjectId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setObjectHandle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEntityParentId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUndoStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasSelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSelectionBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEntitiesBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        saveObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deleteObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLastTransactionId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLastTransactionId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        startTransactionGroup
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransactionGroup
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        saveTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deleteTransactionsFrom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        resetTransactionStack
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toggleUndoStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxTransactionId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNewObjectId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxObjectId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNewObjectHandle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxObjectHandle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMaxDrawOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxDrawOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinDrawOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInBackStorage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getKnownVariableName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setModified
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isModified
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLastModified
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addModifiedListener
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        update
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNotifyListeners
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNotifyListeners
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RStorage* getSelf(const QString& fName, QScriptContext* context)
    ;static RStorage* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    