/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKComplication.h>

@class CLKComplicationPreviewTimelineEntry;

@interface NTKUVPreviewComplication : NTKComplication {

	CLKComplicationPreviewTimelineEntry* _entry;
	long long _family;

}

@property (nonatomic,readonly) CLKComplicationPreviewTimelineEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) long long family;                                         //@synthesize family=_family - In the implementation block
+(id)complicationWithEntry:(id)arg1 forFamily:(long long)arg2 ;
-(id)init;
-(long long)family;
-(CLKComplicationPreviewTimelineEntry *)entry;
-(id)initWithComplicationType:(unsigned long long)arg1 ;
-(BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
@end
