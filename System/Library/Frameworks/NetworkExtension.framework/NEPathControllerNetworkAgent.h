/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NENetworkAgent.h>

@class NSMutableArray, NSString;

@interface NEPathControllerNetworkAgent : NENetworkAgent {

	BOOL updateClientsImmediately;
	BOOL _isForcedAdvisory;
	BOOL _weakAdvisory;
	BOOL _noAdvisoryTimer;
	/*^block*/id _internalAssertHandler;
	/*^block*/id _internalUnassertHandler;
	NSMutableArray* _predictedInterfaceArray;
	NSMutableArray* _advisoryInterfaceArray;
	NSString* _advisoryAgentDomain;
	NSString* _advisoryAgentType;

}

@property (copy) id internalAssertHandler;                                //@synthesize internalAssertHandler=_internalAssertHandler - In the implementation block
@property (copy) id internalUnassertHandler;                              //@synthesize internalUnassertHandler=_internalUnassertHandler - In the implementation block
@property (retain) NSMutableArray * predictedInterfaceArray;              //@synthesize predictedInterfaceArray=_predictedInterfaceArray - In the implementation block
@property (retain) NSMutableArray * advisoryInterfaceArray;               //@synthesize advisoryInterfaceArray=_advisoryInterfaceArray - In the implementation block
@property (retain) NSString * advisoryAgentDomain;                        //@synthesize advisoryAgentDomain=_advisoryAgentDomain - In the implementation block
@property (retain) NSString * advisoryAgentType;                          //@synthesize advisoryAgentType=_advisoryAgentType - In the implementation block
@property (assign) BOOL weakAdvisory;                                     //@synthesize weakAdvisory=_weakAdvisory - In the implementation block
@property (assign) BOOL noAdvisoryTimer;                                  //@synthesize noAdvisoryTimer=_noAdvisoryTimer - In the implementation block
@property (assign,nonatomic) BOOL isForcedAdvisory;                       //@synthesize isForcedAdvisory=_isForcedAdvisory - In the implementation block
+(id)agentFromData:(id)arg1 ;
+(id)agentType;
-(id)internalAssertHandler;
-(void)setAdvisoryAgentDomain:(NSString *)arg1 ;
-(NSString *)advisoryAgentType;
-(NSString *)advisoryAgentDomain;
-(void)setAssertHandler:(/*^block*/id)arg1 ;
-(void)setAdvisoryInterfaceArray:(NSMutableArray *)arg1 ;
-(id)initWithAdvisoryAgentDomain:(id)arg1 agentType:(id)arg2 advisoryMode:(unsigned long long)arg3 ;
-(BOOL)isForcedAdvisory;
-(void)setAdvisoryAgentType:(NSString *)arg1 ;
-(void)setNoAdvisoryTimer:(BOOL)arg1 ;
-(void)setWeakAdvisory:(BOOL)arg1 ;
-(void)setPredictedInterfaceArray:(NSMutableArray *)arg1 ;
-(void)unassertAgentWithOptions:(id)arg1 ;
-(BOOL)updateClientsImmediately;
-(void)setInternalUnassertHandler:(id)arg1 ;
-(BOOL)assertAgentWithOptions:(id)arg1 ;
-(NSMutableArray *)advisoryInterfaceArray;
-(id)copyAgentData;
-(void)setInternalAssertHandler:(id)arg1 ;
-(id)internalUnassertHandler;
-(void)setUnassertHandler:(/*^block*/id)arg1 ;
-(void)setIsForcedAdvisory:(BOOL)arg1 ;
-(void)setUpdateClientsImmediately:(BOOL)arg1 ;
-(BOOL)weakAdvisory;
-(BOOL)noAdvisoryTimer;
-(NSMutableArray *)predictedInterfaceArray;
-(id)initWithAdvisoryInterface:(id)arg1 advisoryMode:(unsigned long long)arg2 ;
@end

