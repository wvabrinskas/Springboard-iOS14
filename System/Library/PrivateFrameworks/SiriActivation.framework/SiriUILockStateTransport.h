/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface SiriUILockStateTransport : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _transport;

}

@property (nonatomic,retain) NSNumber * transport;              //@synthesize transport=_transport - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTransport:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)transport;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSiriUILockState:(unsigned long long)arg1 ;
-(unsigned long long)SiriUILockState;
@end
