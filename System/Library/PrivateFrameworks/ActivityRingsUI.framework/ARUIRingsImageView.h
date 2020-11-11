/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/ARUIRingGroupDelegate.h>

@class ARUIRenderContext, ARUIRingGroup, ARUIRenderer, NSString;

@interface ARUIRingsImageView : UIImageView <ARUIRingGroupDelegate> {

	ARUIRenderContext* _renderContext;
	BOOL _needsImageRender;
	ARUIRingGroup* _ringGroup;
	ARUIRenderer* _renderer;

}

@property (nonatomic,readonly) ARUIRingGroup * ringGroup;              //@synthesize ringGroup=_ringGroup - In the implementation block
@property (nonatomic,readonly) ARUIRenderer * renderer;                //@synthesize renderer=_renderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ARUIRenderer *)renderer;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(ARUIRingGroup *)ringGroup;
-(id)initWithRingGroup:(id)arg1 renderer:(id)arg2 ;
-(id)initWithRingGroup:(id)arg1 ;
-(void)ringGroupHasUpdated:(id)arg1 ;
-(void)_updateRenderContext;
-(void)_renderImage;
@end
