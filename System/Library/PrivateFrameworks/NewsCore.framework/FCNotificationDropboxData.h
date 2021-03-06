/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCNotificationDropboxData.h>
@class NSString;


@protocol FCNotificationDropboxData <NSObject,NSMutableCopying>
@property (nonatomic,copy,readonly) NSString * baseURLString; 
@property (nonatomic,copy,readonly) NSString * notificationUserID; 
@property (nonatomic,copy,readonly) NSString * deviceToken; 
@property (nonatomic,copy,readonly) NSString * storefrontID; 
@required
-(NSString *)storefrontID;
-(NSString *)baseURLString;
-(NSString *)deviceToken;
-(NSString *)notificationUserID;

@end


@class NSString, NSDictionary;

@interface FCNotificationDropboxData : NSObject <FCNotificationDropboxData> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * baseURLString; 
@property (nonatomic,copy,readonly) NSString * notificationUserID; 
@property (nonatomic,copy,readonly) NSString * deviceToken; 
@property (nonatomic,copy,readonly) NSString * storefrontID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)storefrontID;
-(id)init;
-(NSString *)baseURLString;
-(NSString *)deviceToken;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)notificationUserID;
-(NSDictionary *)dictionary;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

