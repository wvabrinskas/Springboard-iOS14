/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMIVideoEventBuffer;

@interface HMIVideoTimeline : HMFObject {

	HMIVideoEventBuffer* _buffer;

}
-(id)initWithMaxCapacity:(long long)arg1 ;
-(id)dateAtTime:(SCD_Struct_HM3)arg1 ;
-(void)addDate:(id)arg1 atTime:(SCD_Struct_HM3)arg2 ;
-(double)timeIntervalSinceDateAtTime:(SCD_Struct_HM3)arg1 ;
@end

