/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSMutableSet, NSMutableArray;

@interface _GEOPlaceDataRequestHelper : NSObject {

	/*^block*/id _requestHandler;
	NSDictionary* _identifierOrderMap;
	NSMutableSet* _remaningIdentifiers;
	NSMutableArray* _results;

}
+(id)helperForHandler:(/*^block*/id)arg1 identifiers:(id)arg2 ;
+(id)helperExpiredIdentifiers:(id)arg1 ;
-(BOOL)finishedIdentifier:(id)arg1 withResult:(id)arg2 error:(id)arg3 ;
-(void)failAllRemainingRequests;
-(id)description;
@end

