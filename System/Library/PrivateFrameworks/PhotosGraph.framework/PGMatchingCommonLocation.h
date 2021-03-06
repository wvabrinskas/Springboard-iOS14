/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosGraph/PhotosGraph-Structs.h>
@class NSString;

@interface PGMatchingCommonLocation : NSObject {

	double _distance;
	NSString* _label;
	CLLocationCoordinate2D _coordinate;
	CLLocationCoordinate2D _addressCoordinate;

}

@property (nonatomic,retain) NSString * label;                                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                     //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D addressCoordinate;              //@synthesize addressCoordinate=_addressCoordinate - In the implementation block
+(id)matchingCommonLocationWithLabel:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2 forAddressCoordinate:(CLLocationCoordinate2D)arg3 ;
-(NSString *)label;
-(CLLocationCoordinate2D)coordinate;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(double)distanceBetweenCoordinates;
-(CLLocationCoordinate2D)addressCoordinate;
-(void)setAddressCoordinate:(CLLocationCoordinate2D)arg1 ;
@end

