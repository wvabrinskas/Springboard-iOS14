/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, VSAccountChannels;

@interface VSAccountsArchive : NSObject <NSSecureCoding> {

	NSArray* _accounts;
	VSAccountChannels* _channels;

}

@property (nonatomic,copy) NSArray * accounts;                        //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,copy) VSAccountChannels * channels;              //@synthesize channels=_channels - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)accounts;
-(id)init;
-(VSAccountChannels *)channels;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)setChannels:(VSAccountChannels *)arg1 ;
@end

