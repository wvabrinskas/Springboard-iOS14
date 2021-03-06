/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class CKComponentScopeHandle;

@interface CKComponentScopeFrame : NSObject {

	unordered_map<_CKStateScopeKey, CKComponentScopeFrame *, std::__1::hash<_CKStateScopeKey>, std::__1::equal_to<_CKStateScopeKey>, std::__1::allocator<std::__1::pair<const _CKStateScopeKey, CKComponentScopeFrame *> > >* _children;
	CKComponentScopeHandle* _handle;

}

@property (nonatomic,readonly) CKComponentScopeHandle * handle;              //@synthesize handle=_handle - In the implementation block
+(CKComponentScopeFramePair)childPairForPair:(const CKComponentScopeFramePair*)arg1 newRoot:(id)arg2 componentClass:(Class)arg3 identifier:(id)arg4 initialStateCreator:(/*^block*/id)arg5 stateUpdates:(const unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >*)arg6 ;
-(CKComponentScopeHandle *)handle;
-(id)initWithHandle:(id)arg1 ;
@end

