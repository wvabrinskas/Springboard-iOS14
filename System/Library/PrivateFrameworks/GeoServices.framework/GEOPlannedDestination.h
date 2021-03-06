/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSData;

@interface GEOPlannedDestination : NSObject <NSSecureCoding> {

	NSDate* _arrivalDate;
	NSDate* _expirationDate;
	int _transportType;
	NSData* _handle;

}

@property (nonatomic,retain) NSDate * arrivalDate;                 //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) int transportType;                    //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSData * handle;                    //@synthesize handle=_handle - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setArrivalDate:(NSDate *)arg1 ;
-(NSData *)handle;
-(NSDate *)arrivalDate;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
-(id)init;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMapItemHandle:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)initWithMapItem:(id)arg1 ;
@end

