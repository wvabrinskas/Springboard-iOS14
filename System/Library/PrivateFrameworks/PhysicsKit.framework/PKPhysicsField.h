/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhysicsKit/PhysicsKit-Structs.h>
@class PKRegion;

@interface PKPhysicsField : NSObject {

	shared_ptr<PKCField>* _field;
	PKRegion* _region;
	 _position;
	float _rotation;
	 _scale;
	BOOL _override;

}

@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloff; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isOverride,nonatomic) BOOL override;                    //@synthesize override=_override - In the implementation block
@property (nonatomic,retain) id region; 
@property (assign,nonatomic)  direction; 
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic)  position; 
@property (assign,nonatomic) float rotation; 
@property (assign,nonatomic)  scale; 
@property (assign,nonatomic) float minimumRadius; 
@property (assign,nonatomic,__weak) id<NSObject> representedObject; 
-(shared_ptr<PKCField>*)_field;
-(float)falloff;
-(id)region;
-(void)setActive:(BOOL)arg1 ;
-()direction;
-(id)init;
-(BOOL)override;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDirection:;
-(void)setRotation:(float)arg1 ;
-(float)strength;
-(void)setRegion:(id)arg1 ;
-(void)setStrength:(float)arg1 ;
-(float)minimumRadius;
-(void)setScale:;
-(float)rotation;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(void)setRepresentedObject:(id<NSObject>)arg1 ;
-(id<NSObject>)representedObject;
-(void)setMinimumRadius:(float)arg1 ;
-(BOOL)isActive;
-(BOOL)isOverride;
-(void)setIsOverride:(BOOL)arg1 ;
-()position;
-(void)setPosition:;
-(void)setFalloff:(float)arg1 ;
-(BOOL)isEnabled;
-(void)setOverride:(BOOL)arg1 ;
-()scale;
-(void)dealloc;
-(unsigned)categoryBitMask;
-(void)set_field:(shared_ptr<PKCField>*)arg1 ;
@end

