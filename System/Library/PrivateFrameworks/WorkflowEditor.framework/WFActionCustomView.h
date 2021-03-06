/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol WFComponentNavigationContext;
@class WFAction;

@interface WFActionCustomView : UIView {

	WFAction* _action;
	id<WFComponentNavigationContext> _navigationContext;

}

@property (assign,nonatomic,__weak) WFAction * action;                                               //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
+(double)preferredHeightForAction:(id)arg1 ;
-(void)setAction:(WFAction *)arg1 ;
-(WFAction *)action;
-(id<WFComponentNavigationContext>)navigationContext;
-(void)setNavigationContext:(id<WFComponentNavigationContext>)arg1 ;
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
@end

