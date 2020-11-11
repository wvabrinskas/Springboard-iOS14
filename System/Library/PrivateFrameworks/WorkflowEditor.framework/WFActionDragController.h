/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFComponentDragController.h>
#import <libobjc.A.dylib/CKComponentHostingViewDelegate.h>

@class NSArray, WFAction, NSHashTable, WFModuleModel, NSString;

@interface WFActionDragController : WFComponentDragController <CKComponentHostingViewDelegate> {

	CGSize _initialSize;
	CGPoint _initialLocation;
	NSArray* _actions;
	WFAction* _sourceAction;
	/*^block*/id _actionGenerator;
	NSHashTable* _viewControllers;

}

@property (nonatomic,retain) WFAction * sourceAction;                    //@synthesize sourceAction=_sourceAction - In the implementation block
@property (nonatomic,copy) id actionGenerator;                           //@synthesize actionGenerator=_actionGenerator - In the implementation block
@property (nonatomic,retain) NSHashTable * viewControllers;              //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) WFModuleModel * model; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)updateView;
-(void)setViewControllers:(NSHashTable *)arg1 ;
-(NSHashTable *)viewControllers;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(void)reset;
-(void)loadView;
-(id)actions;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 sourceAction:(id)arg2 ;
-(id)initWithGestureRecognizer:(id)arg1 actionGenerator:(/*^block*/id)arg2 ;
-(long long)sizeRangeFlexibility;
-(void)updateCurrentViewControllers;
-(WFAction *)sourceAction;
-(void)setSourceAction:(WFAction *)arg1 ;
-(id)actionGenerator;
-(void)setActionGenerator:(id)arg1 ;
@end
