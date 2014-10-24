//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartClippingShaderEffect.h>

@class TSCH3DShaderVariable;

__attribute__((visibility("hidden")))
@interface TSCH3DChartBarGrowClipShaderEffect : TSCH3DChartClippingShaderEffect
{
    TSCH3DShaderVariable *mTimingValue;
    BOOL mPositiveOnly;
    BOOL mUseXAxis;
    float mCapFudge;
    float mClipFudge;
    float mClipInitialCapFudge;
    BOOL mDisableClippingInitialCap;
    BOOL mDisableClipping;
    BOOL mUseDiscard;
    BOOL mUseCapScaling;
}

+ (id)variableInverseBevelInfo;
+ (id)variableIsCap;
+ (id)variableClipVertex;
+ (id)variableElementRange;
@property(nonatomic) BOOL useCapScaling; // @synthesize useCapScaling=mUseCapScaling;
@property(nonatomic) float clipFudge; // @synthesize clipFudge=mClipFudge;
@property(nonatomic) float capFudge; // @synthesize capFudge=mCapFudge;
@property(nonatomic) BOOL useDiscard; // @synthesize useDiscard=mUseDiscard;
@property(nonatomic) BOOL useXAxis; // @synthesize useXAxis=mUseXAxis;
@property(nonatomic) BOOL positiveOnly; // @synthesize positiveOnly=mPositiveOnly;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)inject:(id)arg1;
- (void)p_injectFunctions:(id)arg1;
- (void)addVariables:(id)arg1;
- (unsigned int)numberOfClippingValues;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)variableInverseBevelInfo;
- (id)variableIsCap;
- (id)variableClipVertex;
- (id)variableElementRange;

@end
