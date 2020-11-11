/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CALayer, NSString;

@interface CKAppliedAnimationContext : NSObject {

	CALayer* _targetLayer;
	NSString* _key;

}

@property (nonatomic,readonly) CALayer * targetLayer;              //@synthesize targetLayer=_targetLayer - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                //@synthesize key=_key - In the implementation block
-(NSString *)key;
-(id)initWithTargetLayer:(id)arg1 key:(id)arg2 ;
-(CALayer *)targetLayer;
@end
