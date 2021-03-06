/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DKReporterRegistry;

@interface DKReportPlanner : NSObject {

	DKReporterRegistry* _registry;

}

@property (nonatomic,retain) DKReporterRegistry * registry;              //@synthesize registry=_registry - In the implementation block
+(id)plannerWithReportGeneratorRegistry:(id)arg1 ;
-(void)setRegistry:(DKReporterRegistry *)arg1 ;
-(DKReporterRegistry *)registry;
-(id)requestGroupsForPredicateManifest:(id)arg1 ;
-(id)initWithReportGeneratorRegistry:(id)arg1 ;
-(id)_resolveComponentIdentityManifest:(id)arg1 ;
@end

