//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKEffectNode.h>

@class NSMutableArray, NSMutableDictionary, PKPhysicsWorld, SKPhysicsBody, SKPhysicsWorld, SKView, UIColor;

@interface SKScene : SKEffectNode
{
    double _lastUpdate;
    double _pausedTime;
    struct CGRect _visibleRect;
    int _scaleMode;
    NSMutableDictionary *_touchMap;
    NSMutableArray *_allChildenWithConstraints;
    struct CGRect _bounds;
    BOOL _isSetup;
    BOOL _usesExplicitUpdate;
    BOOL _usesExplicitRender;
    SKPhysicsBody *_scenePinBody;
    id _view;
    BOOL __needsUpdate;
    BOOL __needsRender;
    SKPhysicsWorld *_physicsWorld;
    id <SKSceneDelegate> _delegate;
    PKPhysicsWorld *__pkPhysicsWorld;
}

+ (id)sceneWithContentsOfFile:(id)arg1 size:(struct CGSize)arg2;
+ (id)sceneWithContentsOfFile:(id)arg1;
+ (id)sceneWithSize:(struct CGSize)arg1;
@property(retain, nonatomic) PKPhysicsWorld *_pkPhysicsWorld; // @synthesize _pkPhysicsWorld=__pkPhysicsWorld;
@property BOOL _needsRender; // @synthesize _needsRender=__needsRender;
@property BOOL _needsUpdate; // @synthesize _needsUpdate=__needsUpdate;
@property(nonatomic) id <SKSceneDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int scaleMode; // @synthesize scaleMode=_scaleMode;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak SKView *view;
- (void)setPaused:(BOOL)arg1;
- (void)didFinishUpdate;
- (void)didApplyConstraints;
- (void)didSimulatePhysics;
- (void)didEvaluateActions;
- (void)_update:(double)arg1;
- (void)update:(double)arg1;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)willMoveFromView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)_didMoveToView:(id)arg1;
@property(readonly, nonatomic) SKPhysicsWorld *physicsWorld; // @synthesize physicsWorld=_physicsWorld;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint visibleRectCenter;
@property(nonatomic) struct CGSize visibleRectSize;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (struct CGPoint)convertPointToView:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromView:(struct CGPoint)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)setZPosition:(float)arg1;
- (float)zPosition;
- (void)setZRotation:(float)arg1;
- (float)zRotation;
- (void)setYScale:(float)arg1;
- (float)yScale;
- (void)setXScale:(float)arg1;
- (float)xScale;
- (void)setScale:(float)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
@property(nonatomic) struct CGPoint anchorPoint;
@property(retain, nonatomic) UIColor *backgroundColor;
- (void)_removeConstraintsForNode:(id)arg1;
- (void)_registerConstraintsForNode:(id)arg1;
- (BOOL)_hasConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setNeedsRender;
- (void)_setNeedsUpdate;
@property BOOL _usesExplicitRender;
@property BOOL _usesExplicitUpdate;
- (void)didContinueContact:(id)arg1;

@end
