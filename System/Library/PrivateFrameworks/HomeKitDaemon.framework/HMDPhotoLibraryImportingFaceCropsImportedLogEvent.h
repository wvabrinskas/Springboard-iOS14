/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDPhotoLibraryImportingFaceCropsImportedLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	long long _numberOfImportedFaceCrops;

}

@property (readonly) long long numberOfImportedFaceCrops;              //@synthesize numberOfImportedFaceCrops=_numberOfImportedFaceCrops - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)serializedEvent;
-(long long)numberOfImportedFaceCrops;
-(id)initWithNumberOfImportedFaceCrops:(long long)arg1 ;
@end
