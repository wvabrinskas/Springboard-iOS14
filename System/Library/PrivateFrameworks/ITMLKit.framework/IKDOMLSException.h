/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKDOMLSException.h>

@protocol IKDOMLSException <JSExport>
@property (assign,nonatomic) long long code; 
@required
-(void)setCode:(long long)arg1;
-(long long)code;

@end


@interface IKDOMLSException : IKJSObject <IKDOMLSException> {

	long long code;

}

@property (assign,nonatomic) long long code; 
+(id)exceptionWithAppContext:(id)arg1 code:(long long)arg2 ;
-(void)setCode:(long long)arg1 ;
-(long long)code;
@end
