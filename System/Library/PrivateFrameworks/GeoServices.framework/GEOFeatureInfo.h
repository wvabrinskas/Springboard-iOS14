/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface GEOFeatureInfo : NSObject {

	NSString* _name;
	NSArray* _environments;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * environments;              //@synthesize environments=_environments - In the implementation block
@property (assign,nonatomic) long long state; 
-(void)setState:(long long)arg1 ;
-(long long)state;
-(NSString *)name;
-(NSArray *)environments;
-(id)initWithName:(id)arg1 environments:(id)arg2 ;
@end
