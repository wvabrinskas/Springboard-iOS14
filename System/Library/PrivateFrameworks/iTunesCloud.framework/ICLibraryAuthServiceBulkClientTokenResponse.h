/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface ICLibraryAuthServiceBulkClientTokenResponse : NSObject <NSCopying> {

	NSDictionary* _responseDictionary;
	NSMutableDictionary* _parsedTokenResults;

}

@property (nonatomic,copy,readonly) NSString * serverInstance; 
@property (nonatomic,copy,readonly) NSDictionary * tokenResults; 
-(NSDictionary *)tokenResults;
-(id)tokenResultForAccountDSID:(id)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)serverInstance;
@end

