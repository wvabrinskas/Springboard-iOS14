/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AADataType.h>

@interface WALocationCondition : NSObject <AADataType> {

	long long _locationCondition;

}

@property (nonatomic,readonly) long long locationCondition;              //@synthesize locationCondition=_locationCondition - In the implementation block
-(id)initWithLocationCondition:(long long)arg1 ;
-(id)toJsonValueAndReturnError:(id*)arg1 ;
-(long long)locationCondition;
@end

