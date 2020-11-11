/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MapsSuggestionsVirtualGarageConnector <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) id<MapsSuggestionsVirtualGarageConnectorDelegate> delegate; 
@required
-(id<MapsSuggestionsVirtualGarageConnectorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)openVGConnection;
-(void)closeVGConnection;
-(void)startObservingVG;
-(void)stopObservingVG;
-(void)fetchUnpairedVehiclesWithHandler:(/*^block*/id)arg1;
-(void)fetchStateOfChargeForVehicleWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;

@end
