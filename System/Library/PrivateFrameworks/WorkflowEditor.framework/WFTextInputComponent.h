/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKStatefulViewComponent.h>

@interface WFTextInputComponent : CKStatefulViewComponent {

	/*^block*/id _updateBlock;
	CKTypedComponentAction<> _beginAction;
	CKTypedComponentAction<> _doneAction;
	WFTextInputAttributes _attributes;

}

@property (nonatomic,readonly) WFTextInputAttributes attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                    //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> beginAction;              //@synthesize beginAction=_beginAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> doneAction;               //@synthesize doneAction=_doneAction - In the implementation block
+(id)newWithAttributes:(const WFTextInputAttributes*)arg1 updateBlock:(/*^block*/id)arg2 beginAction:(CKTypedComponentAction<>)arg3 doneAction:(CKTypedComponentAction<>)arg4 size:(const CKComponentSize*)arg5 ;
-(id)updateBlock;
-(CKTypedComponentAction<>)doneAction;
-(WFTextInputAttributes)attributes;
-(CKTypedComponentAction<>)beginAction;
@end

