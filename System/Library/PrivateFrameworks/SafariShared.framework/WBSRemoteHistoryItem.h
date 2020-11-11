/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDate;

@interface WBSRemoteHistoryItem : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSString* _title;
	NSDate* _lastVisitTime;

}

@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSDate * lastVisitTime;              //@synthesize lastVisitTime=_lastVisitTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSURL *)url;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastVisitTime;
-(id)description;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 lastVisitTime:(id)arg3 ;
@end
