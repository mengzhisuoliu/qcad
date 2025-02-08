// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASHAREDPOINTERPOLYLINEENTITY_H
        #define RECMASHAREDPOINTERPOLYLINEENTITY_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RPolylineEntity.h"
            
            typedef QSharedPointer<RPolylineEntity> RPolylineEntityPointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSharedPointerPolylineEntity {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRObject(QScriptContext *context,
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
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRtti
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStaticPropertyTypeIds
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        cloneToPolylineEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPolylineShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        normalize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        countVertices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        appendVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        prependVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        insertVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        insertVertexAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        insertVerticesAtSelfIntersections
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVertexAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVertexAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeLastVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        countSegments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSegmentAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isArcSegmentAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasArcSegments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestSegment
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBulgeAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBulgeAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVertexAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        stripWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMinimumWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGlobalWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStartWidthAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartWidthAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEndWidthAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndWidthAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStartWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEndWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reverse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSideOfPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        relocateStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isGeometricallyClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        autoClose
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toLogicallyClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toLogicallyOpen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSelfIntersectionPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOrientation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getArea
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLengthTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExploded
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getComplexity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toPainterPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        simplify
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        verifyTangency
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPolylineGen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPolylineGen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setElevation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getElevation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isFlat
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTrimEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        morph
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        contains
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        containsShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        validate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPolylineEntity* getSelf(const QString& fName, QScriptContext* context)
    ;static RPolylineEntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    