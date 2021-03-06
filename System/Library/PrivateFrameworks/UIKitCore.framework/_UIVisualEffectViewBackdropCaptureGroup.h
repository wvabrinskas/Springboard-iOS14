/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPointerArray, NSString;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {

	NSPointerArray* _backdrops;
	BOOL _disableInPlaceFiltering;
	NSString* _groupName;
	NSString* _groupNamespace;
	double _scale;
	double _minimumScale;

}

@property (nonatomic,copy) NSString * groupName;                        //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * groupNamespace;                   //@synthesize groupNamespace=_groupNamespace - In the implementation block
@property (assign,nonatomic) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double minimumScale;                       //@synthesize minimumScale=_minimumScale - In the implementation block
@property (assign,nonatomic) BOOL disableInPlaceFiltering;              //@synthesize disableInPlaceFiltering=_disableInPlaceFiltering - In the implementation block
-(double)minimumScale;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setMinimumScale:(double)arg1 ;
-(id)init;
-(void)setDisableInPlaceFiltering:(BOOL)arg1 ;
-(void)removeBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(void)setScale:(double)arg1 ;
-(id)description;
-(long long)indexOfBackdropView:(id)arg1 ;
-(BOOL)allowInPlaceFiltering;
-(void)updateAllBackdropViews;
-(void)addBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(void)applyScaleHint:(double)arg1 ;
-(id)initWithBackdrop:(id)arg1 ;
-(id)initWithName:(id)arg1 scale:(double)arg2 ;
-(void)setGroupNamespace:(NSString *)arg1 ;
-(NSString *)groupNamespace;
-(BOOL)disableInPlaceFiltering;
-(double)scale;
@end

