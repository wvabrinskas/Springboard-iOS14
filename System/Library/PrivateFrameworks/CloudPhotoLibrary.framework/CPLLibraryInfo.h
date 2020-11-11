/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, CPLFeatureVersionHistory, NSData, CPLMomentShare, CPLAccountFlags;

@interface CPLLibraryInfo : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _assetCounts;
	CPLFeatureVersionHistory* _featureVersionHistory;
	NSData* _accountFlagsData;
	CPLMomentShare* _momentShare;

}

@property (nonatomic,copy) NSDictionary * assetCounts;                                      //@synthesize assetCounts=_assetCounts - In the implementation block
@property (nonatomic,retain) CPLFeatureVersionHistory * featureVersionHistory;              //@synthesize featureVersionHistory=_featureVersionHistory - In the implementation block
@property (nonatomic,readonly) CPLAccountFlags * accountFlags; 
@property (nonatomic,copy) NSData * accountFlagsData;                                       //@synthesize accountFlagsData=_accountFlagsData - In the implementation block
@property (nonatomic,retain) CPLMomentShare * momentShare;                                  //@synthesize momentShare=_momentShare - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cplAdditionalSecureClassesForProperty:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(CPLAccountFlags *)accountFlags;
-(void)setMomentShare:(CPLMomentShare *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CPLMomentShare *)momentShare;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)accountFlagsData;
-(void)setAccountFlagsData:(NSData *)arg1 ;
-(id)prettyDescriptionWithAnchorDesciptionBlock:(/*^block*/id)arg1 ;
-(NSDictionary *)assetCounts;
-(void)setAssetCounts:(NSDictionary *)arg1 ;
-(CPLFeatureVersionHistory *)featureVersionHistory;
-(void)setFeatureVersionHistory:(CPLFeatureVersionHistory *)arg1 ;
@end
