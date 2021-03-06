/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HKSourceDataModel, HKDevice, NSString;

@interface WDSource : NSObject {

	HKSourceDataModel* _sourceModel;
	HKDevice* _device;
	NSString* _name;

}

@property (nonatomic,readonly) HKSourceDataModel * sourceModel;              //@synthesize sourceModel=_sourceModel - In the implementation block
@property (nonatomic,readonly) HKDevice * device;                            //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
-(HKDevice *)device;
-(NSString *)name;
-(HKSourceDataModel *)sourceModel;
-(id)initWithSource:(id)arg1 device:(id)arg2 ;
@end

