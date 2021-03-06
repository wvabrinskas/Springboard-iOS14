/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <CalendarUIKit/EKSliceDescription.h>

@class EKSeriesDetails;

@interface EKPostSliceDescription : EKSliceDescription {

	EKSeriesDetails* _updatedMainSeriesDetails;
	EKSeriesDetails* _createdSeriesDetails;

}

@property (copy) EKSeriesDetails * updatedMainSeriesDetails;              //@synthesize updatedMainSeriesDetails=_updatedMainSeriesDetails - In the implementation block
@property (copy) EKSeriesDetails * createdSeriesDetails;                  //@synthesize createdSeriesDetails=_createdSeriesDetails - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(EKSeriesDetails *)updatedMainSeriesDetails;
-(void)setUpdatedMainSeriesDetails:(EKSeriesDetails *)arg1 ;
-(EKSeriesDetails *)createdSeriesDetails;
-(void)setCreatedSeriesDetails:(EKSeriesDetails *)arg1 ;
@end

