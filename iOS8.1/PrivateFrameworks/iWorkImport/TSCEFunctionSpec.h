//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCEFunctionSpec : NSObject
{
    NSString *mFunctionName;
    short mMinArguments;
    short mMaxArguments;
    short mRepeatingGroupSize;
    NSArray *mArguments;
    NSArray *mRepeatingArguments;
    BOOL mIsOperator;
    int mShipVersion;
    int mFunctionIndex;
}

+ (id)functionSpecForFunctionIndex:(int)arg1;
+ (id)specWithFunctionName:(id)arg1 minArgs:(id)arg2 maxArgs:(id)arg3 repeatingGroupSize:(id)arg4 isOperator:(int)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8;
+ (id)specDictionary;
@property(readonly) int functionIndex; // @synthesize functionIndex=mFunctionIndex;
- (id)nativeSyntaxStringForArgument:(int)arg1;
- (id)argumentSpecForIndex:(unsigned int)arg1;
- (int)versionShippedIn;
- (BOOL)isOperator;
- (unsigned int)numArguments;
- (short)maxArguments;
- (short)minArguments;
- (id)arguments;
- (id)displayString;
- (id)localizedToolTipString;
- (id)localizedFunctionName;
- (id)functionName;
- (void)dealloc;
- (id)initWithFunctionName:(id)arg1 minArgs:(int)arg2 maxArgs:(int)arg3 repeatingGroupSize:(int)arg4 isOperator:(BOOL)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8;
- (id)description;
- (void)p_ValidateArguments;

@end

