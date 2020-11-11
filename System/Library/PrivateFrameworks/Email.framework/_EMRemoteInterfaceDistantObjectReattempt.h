/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSInvocation, NSError;

@interface _EMRemoteInterfaceDistantObjectReattempt : NSObject {

	NSInvocation* _invocation;
	NSError* _error;

}

@property (readonly) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
+(id)recordedAttemptWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3 ;
-(void)perform;
-(NSError *)error;
-(id)debugDescription;
-(id)initWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3 ;
-(NSInvocation *)invocation;
@end
