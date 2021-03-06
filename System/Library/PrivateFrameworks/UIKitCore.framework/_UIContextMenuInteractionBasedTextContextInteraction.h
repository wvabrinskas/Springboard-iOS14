/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextContextMenuInteractionBase.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class UIContextMenuInteraction, NSString;

@interface _UIContextMenuInteractionBasedTextContextInteraction : _UITextContextMenuInteractionBase <UIContextMenuInteractionDelegate> {

	UIContextMenuInteraction* _contextMenuInteraction;

}

@property (nonatomic,retain) UIContextMenuInteraction * contextMenuInteraction;              //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(id)init;
-(void)setContextMenuInteraction:(UIContextMenuInteraction *)arg1 ;
-(void)_contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
@end

