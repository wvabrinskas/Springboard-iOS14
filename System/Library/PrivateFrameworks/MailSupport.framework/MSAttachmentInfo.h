/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface MSAttachmentInfo : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSString* _filename;

}

@property (nonatomic,readonly) NSURL * url;                  //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * filename;              //@synthesize filename=_filename - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)url;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 filename:(id)arg2 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
