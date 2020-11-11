/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIContextMenuInteraction.h>

@interface _UIVariableGestureContextMenuInteraction : UIContextMenuInteraction {

	SCD_Struct_UI34 _flags;
	BOOL __prefersCompactAppearance;
	id __proxySender;

}

@property (assign,setter=_setProxySender:,nonatomic,__weak) id _proxySender;                                   //@synthesize _proxySender=__proxySender - In the implementation block
@property (assign,setter=_setPresentOnTouchDown:,nonatomic) BOOL _presentOnTouchDown; 
@property (assign,setter=_setPrefersCompactAppearance:,nonatomic) BOOL _prefersCompactAppearance;              //@synthesize _prefersCompactAppearance=__prefersCompactAppearance - In the implementation block
-(void)_setPresentOnTouchDown:(BOOL)arg1 ;
-(BOOL)_clickPresentationInteractionShouldPlayFeedback:(id)arg1 ;
-(void)_willBeginWithConfiguration:(id)arg1 ;
-(BOOL)_prefersCompactAppearance;
-(void)_setProxySender:(id)arg1 ;
-(long long)menuAppearance;
-(id)_interactionDrivers;
-(id)_proxySender;
-(BOOL)_presentOnTouchDown;
-(void)_setPrefersCompactAppearance:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end
