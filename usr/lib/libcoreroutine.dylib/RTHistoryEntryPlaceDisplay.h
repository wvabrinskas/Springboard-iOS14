/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NSDate, RTLocation, RTMapItem;

@interface RTHistoryEntryPlaceDisplay : NSObject {

	NSUUID* _identifier;
	NSDate* _usageDate;
	RTLocation* _location;
	RTMapItem* _mapItem;

}

@property (nonatomic,readonly) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * usageDate;                 //@synthesize usageDate=_usageDate - In the implementation block
@property (nonatomic,readonly) RTLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;                //@synthesize mapItem=_mapItem - In the implementation block
-(id)init;
-(RTLocation *)location;
-(NSUUID *)identifier;
-(id)description;
-(RTMapItem *)mapItem;
-(NSDate *)usageDate;
-(id)initWithIdentifier:(id)arg1 usageDate:(id)arg2 location:(id)arg3 mapItem:(id)arg4 ;
@end
