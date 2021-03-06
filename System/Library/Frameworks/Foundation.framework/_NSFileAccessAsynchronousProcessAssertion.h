/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, BKSProcessAssertion;

@interface _NSFileAccessAsynchronousProcessAssertion : NSObject {

	int _pid;
	NSString* _name;
	BKSProcessAssertion* _assertion;

}

@property (readonly) int PID;              //@synthesize pid=_pid - In the implementation block
-(int)PID;
-(id)initWithPID:(int)arg1 name:(id)arg2 ;
-(void)beginAssertion;
-(void)invalidate;
-(void)dealloc;
@end

