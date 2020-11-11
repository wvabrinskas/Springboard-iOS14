/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFHealthManagerDelegate;
@class NSSet, WFInterface, NWPathEvaluator, WFNetworkScanRecord, WFNetworkProfile;

@interface WFHealthManager : NSObject {

	NSSet* _currentNetworkIssues;
	id<WFHealthManagerDelegate> _delegate;
	WFInterface* _interface;
	NWPathEvaluator* _evaluator;
	WFNetworkScanRecord* _network;
	WFNetworkProfile* _profile;

}

@property (nonatomic,retain) WFInterface * interface;                                   //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) NSSet * currentNetworkIssues;                              //@synthesize currentNetworkIssues=_currentNetworkIssues - In the implementation block
@property (nonatomic,retain) NWPathEvaluator * evaluator;                               //@synthesize evaluator=_evaluator - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                             //@synthesize network=_network - In the implementation block
@property (nonatomic,retain) WFNetworkProfile * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) BOOL currentNetworkHasNoInternetConnection; 
@property (assign,nonatomic,__weak) id<WFHealthManagerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(WFNetworkScanRecord *)network;
-(id<WFHealthManagerDelegate>)delegate;
-(NSSet *)currentNetworkIssues;
-(id)initWithInterface:(id)arg1 ;
-(void)setDelegate:(id<WFHealthManagerDelegate>)arg1 ;
-(WFNetworkProfile *)profile;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(void)setInterface:(WFInterface *)arg1 ;
-(void)setCurrentNetworkIssues:(NSSet *)arg1 ;
-(NWPathEvaluator *)evaluator;
-(void)dealloc;
-(WFInterface *)interface;
-(void)currentNetworkDidChange:(id)arg1 ;
-(void)linkQualityDidChange:(id)arg1 ;
-(void)_updateCurrentNetworkIssues;
-(BOOL)currentNetworkHasNoInternetConnection;
@end
