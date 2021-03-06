/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface GEOResourceManifestConfiguration : NSObject <NSSecureCoding> {

	unsigned _tileGroupIdentifier;
	NSString* _os;
	NSString* _osVersion;
	NSString* _osBuild;
	NSString* _countryCode;
	NSString* _hardwareIdentifier;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _environment;
	NSString* _dataDirectory;
	int _defaultScale;
	BOOL _requiresLegacyFormat;
	NSArray* _tileSetOverrides;
	NSString* _urlTemplate;

}

@property (nonatomic,copy) NSArray * tileSetOverrides; 
@property (assign,nonatomic) unsigned tileGroupIdentifier;                //@synthesize tileGroupIdentifier=_tileGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * os;                                 //@synthesize os=_os - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                          //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * osBuild;                            //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                        //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * hardwareIdentifier;                 //@synthesize hardwareIdentifier=_hardwareIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                 //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,copy) NSString * environment;                        //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * dataDirectory;                      //@synthesize dataDirectory=_dataDirectory - In the implementation block
@property (nonatomic,copy) NSString * urlTemplate;                        //@synthesize urlTemplate=_urlTemplate - In the implementation block
@property (nonatomic,readonly) int defaultScale;                          //@synthesize defaultScale=_defaultScale - In the implementation block
@property (nonatomic,readonly) BOOL requiresLegacyFormat;                 //@synthesize requiresLegacyFormat=_requiresLegacyFormat - In the implementation block
@property (nonatomic,readonly) NSString * directorySuffix; 
+(id)defaultConfiguration;
+(BOOL)supportsSecureCoding;
+(id)configurationWithPairedDevice:(id)arg1 ;
-(NSString *)hardwareIdentifier;
-(void)setOsVersion:(NSString *)arg1 ;
-(id)_directorySuffixParameters;
-(NSString *)osVersion;
-(void)setDataDirectory:(NSString *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setEnvironment:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)init;
-(NSString *)applicationIdentifier;
-(unsigned long long)hash;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(NSString *)directorySuffix;
-(NSString *)osBuild;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTileGroupIdentifier:(unsigned)arg1 ;
-(BOOL)requiresLegacyFormat;
-(NSString *)countryCode;
-(int)defaultScale;
-(NSString *)dataDirectory;
-(NSString *)urlTemplate;
-(unsigned)tileGroupIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)environment;
-(void)setTileSetOverrides:(NSArray *)arg1 ;
-(BOOL)isDefaultConfiguration;
-(void)setOsBuild:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(NSString *)applicationVersion;
-(NSArray *)tileSetOverrides;
-(void)setOs:(NSString *)arg1 ;
-(id)manifestDictionaryRepresentation;
-(void)setUrlTemplate:(NSString *)arg1 ;
-(NSString *)os;
@end

