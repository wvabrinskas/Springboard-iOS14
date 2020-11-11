/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSDictionary;

@interface PIReframeKeyframe : NSObject {

	SCD_Struct_PI7 _time;
	SCD_Struct_PI9 _homography;

}

@property (nonatomic,readonly) SCD_Struct_PI7 time;                                       //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI9 homography;                                 //@synthesize homography=_homography - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(id)keyframesFromDictionaryRepresentations:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)description;
-(SCD_Struct_PI7)time;
-(SCD_Struct_PI9)homography;
-(id)initWithTime:(SCD_Struct_PI7)arg1 homography:(SCD_Struct_PI9)arg2 ;
@end
