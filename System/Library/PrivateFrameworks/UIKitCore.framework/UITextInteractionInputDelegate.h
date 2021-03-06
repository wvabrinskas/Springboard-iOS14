/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UITextInputDelegate.h>

@class UITextInteraction, NSString;

@interface UITextInteractionInputDelegate : NSObject <UITextInputDelegate> {

	UITextInteraction* _rootInteraction;

}

@property (assign,nonatomic,__weak) UITextInteraction * rootInteraction;              //@synthesize rootInteraction=_rootInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textDidChange:(id)arg1 ;
-(void)selectionWillChange:(id)arg1 ;
-(void)setRootInteraction:(UITextInteraction *)arg1 ;
-(void)selectionDidChange:(id)arg1 ;
-(UITextInteraction *)rootInteraction;
-(void)textWillChange:(id)arg1 ;
@end

