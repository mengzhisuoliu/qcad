// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMALAYOUT_H
        #define RECMALAYOUT_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RLayout.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaLayout {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRObject(QScriptContext *context,
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
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTabOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTabOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMinLimits
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinLimits
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMaxLimits
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxLimits
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setInsertionBase
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getInsertionBase
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMinExtents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinExtents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMaxExtents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxExtents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPlotPaperMarginLeftMM
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPlotPaperMarginBottomMM
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPlotPaperMarginRightMM
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPlotPaperMarginTopMM
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPlotPaperSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPlotOrigin
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPlotWindowAreaMin
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPlotWindowAreaMax
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNumeratorCustomScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDenominatorCustomScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPlotPaperUnits
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPlotRotation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPlotType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUseStandardScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStandardScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStandardScaleType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCanonicalMediaName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlotPaperMarginLeftMM
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlotPaperMarginBottomMM
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlotPaperMarginRightMM
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlotPaperMarginTopMM
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlotPaperSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlotOrigin
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlotWindowAreaMin
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlotWindowAreaMax
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNumeratorCustomScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDenominatorCustomScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlotPaperUnits
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlotRotation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlotType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getUseStandardScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStandardScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStandardScaleType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCanonicalMediaName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RLayout* getSelf(const QString& fName, QScriptContext* context)
    ;static RLayout* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumPlotPaperUnits(QScriptEngine* engine, const RLayout::PlotPaperUnits& value)
    ;static  void fromScriptValueEnumPlotPaperUnits(const QScriptValue& value, RLayout::PlotPaperUnits& out)
    ;static  QScriptValue toScriptValueEnumPlotRotation(QScriptEngine* engine, const RLayout::PlotRotation& value)
    ;static  void fromScriptValueEnumPlotRotation(const QScriptValue& value, RLayout::PlotRotation& out)
    ;static  QScriptValue toScriptValueEnumPlotType(QScriptEngine* engine, const RLayout::PlotType& value)
    ;static  void fromScriptValueEnumPlotType(const QScriptValue& value, RLayout::PlotType& out)
    ;static  QScriptValue toScriptValueEnumStandardScaleType(QScriptEngine* engine, const RLayout::StandardScaleType& value)
    ;static  void fromScriptValueEnumStandardScaleType(const QScriptValue& value, RLayout::StandardScaleType& out)
    ;};
    #endif
    