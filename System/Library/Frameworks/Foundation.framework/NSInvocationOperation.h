/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSInvocation, NSException;

@interface NSInvocationOperation : NSOperation {

	NSInvocation* _inv;
	NSException* _exception;

}

@property (retain,readonly) NSInvocation * invocation; 
@property (retain,readonly) id result; 
-(id)initWithInvocation:(id)arg1 ;
-(id)init;
-(void)main;
-(NSInvocation *)invocation;
-(id)result;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)dealloc;
@end

