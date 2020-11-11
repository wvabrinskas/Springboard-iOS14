/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PGTitle : NSObject {

	NSString* _stringValue;
	long long _category;

}

@property (nonatomic,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) long long category;                  //@synthesize category=_category - In the implementation block
+(id)titleWithString:(id)arg1 category:(long long)arg2 ;
-(long long)category;
-(NSString *)stringValue;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
@end
