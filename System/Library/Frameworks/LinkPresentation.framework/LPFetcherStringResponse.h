/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LPFetcherResponse.h>

@class NSString;

@interface LPFetcherStringResponse : LPFetcherResponse {

	NSString* _string;

}

@property (nonatomic,copy,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
-(id)initWithString:(id)arg1 fetcher:(id)arg2 ;
-(NSString *)string;
@end
