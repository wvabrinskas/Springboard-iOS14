/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPArchiver.h>
#import <TSPersistence/TSPProxyObjectMappingProvider.h>

@protocol TSPProxyObjectMapping;
@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider> {

	id<TSPProxyObjectMapping> _proxyObjectMapping;

}

@property (nonatomic,readonly) long long targetType; 
@property (assign,nonatomic,__weak) id<TSPProxyObjectMapping> proxyObjectMapping;              //@synthesize proxyObjectMapping=_proxyObjectMapping - In the implementation block
-(long long)targetType;
-(void)setStrongReference:(id)arg1 message:(Reference*)arg2 ;
-(void)setStrongLazyReference:(id)arg1 message:(Reference*)arg2 ;
-(id<TSPProxyObjectMapping>)proxyObjectMapping;
-(void)setProxyObjectMapping:(id<TSPProxyObjectMapping>)arg1 ;
@end

