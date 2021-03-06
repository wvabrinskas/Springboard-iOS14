/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WorkflowKit/WorkflowKit-Structs.h>
@interface RLMThreadSafeReference : NSObject {

	unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >* _reference;
	id _metadata;
	Class _type;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
+(id)referenceWithThreadConfined:(id)arg1 ;
-(BOOL)isInvalidated;
-(id)resolveReferenceInRealm:(id)arg1 ;
-(id)initWithThreadConfined:(id)arg1 ;
@end

