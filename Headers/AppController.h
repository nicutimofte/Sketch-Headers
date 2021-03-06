//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSDataMenuProviderDelegate.h"
#import "MSDataSupplierManagerDelegate.h"
#import "NSApplicationDelegate.h"
#import "NSMenuDelegate.h"
#import "NSUserNotificationCenterDelegate.h"
#import "NSWindowDelegate.h"

@class BCLicenseManager, ECLogManagerMacUISupport, MSActionController, MSAssetLibraryController, MSComponentsPanelController, MSCrashLogManager, MSDataMenuProvider, MSDataSupplierManager, MSDocumentationSearcher, MSFontWatcher, MSHUDWindowController, MSIOSConnectionController, MSMirrorDataProvider, MSPasteboardManager, MSPersistentAssetCollection, MSPluginCommand, MSPluginManagerWithActions, MSUpdateController, NSArray, NSMenu, NSMenuItem, NSObject<OS_dispatch_semaphore>, NSString, NSTimer, SMKMirrorController;

@interface AppController : NSObject <NSApplicationDelegate, NSWindowDelegate, NSMenuDelegate, NSUserNotificationCenterDelegate, MSDataMenuProviderDelegate, MSDataSupplierManagerDelegate>
{
    BOOL _sketchSafeModeOn;
    BOOL _canCreateDocuments;
    id _shapesMenu;
    NSMenuItem *_pluginsMenuItem;
    NSMenu *_templatesMenu;
    NSMenu *_printMenu;
    NSMenuItem *_prototypingMenuItem;
    NSMenuItem *_debugMenuItem;
    MSIOSConnectionController *_connectionController;
    NSMenuItem *_insertSymbolMenuItem;
    NSMenuItem *_insertSharedTextStyleMenuItem;
    NSMenuItem *_dataFeedMenuItem;
    NSMenuItem *_cloudEnvironmentMenuItem;
    NSTimer *_updateTimer;
    MSPasteboardManager *_pasteboardManager;
    SMKMirrorController *_mirrorController;
    MSMirrorDataProvider *_mirrorDataProvider;
    MSDataMenuProvider *_dataFeedProvider;
    MSCrashLogManager *_crashLogManager;
    MSPluginManagerWithActions *_pluginManager;
    BCLicenseManager *_licenseManager;
    MSUpdateController *_updateController;
    MSActionController *_actionController;
    MSAssetLibraryController *_librariesController;
    double _creationTime;
    double _launchStartTime;
    double _launchEndTime;
    MSPersistentAssetCollection *_globalAssets;
    NSString *_scriptPath;
    NSObject<OS_dispatch_semaphore> *_migrationSemaphore;
    ECLogManagerMacUISupport *_logSupport;
    MSHUDWindowController *_hud;
    MSDocumentationSearcher *_documentationSearcher;
    NSArray *_visualSettings;
    MSComponentsPanelController *_componentsPanelController;
    MSFontWatcher *_fontWatcher;
    id _lastRunPlugin;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id lastRunPlugin; // @synthesize lastRunPlugin=_lastRunPlugin;
@property(retain, nonatomic) MSFontWatcher *fontWatcher; // @synthesize fontWatcher=_fontWatcher;
@property(retain, nonatomic) MSComponentsPanelController *componentsPanelController; // @synthesize componentsPanelController=_componentsPanelController;
@property(retain, nonatomic) NSArray *visualSettings; // @synthesize visualSettings=_visualSettings;
@property(retain, nonatomic) MSDocumentationSearcher *documentationSearcher; // @synthesize documentationSearcher=_documentationSearcher;
@property(retain, nonatomic) MSHUDWindowController *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) ECLogManagerMacUISupport *logSupport; // @synthesize logSupport=_logSupport;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *migrationSemaphore; // @synthesize migrationSemaphore=_migrationSemaphore;
@property(nonatomic) NSString *scriptPath; // @synthesize scriptPath=_scriptPath;
@property(nonatomic) BOOL canCreateDocuments; // @synthesize canCreateDocuments=_canCreateDocuments;
@property(readonly, nonatomic) BOOL sketchSafeModeOn; // @synthesize sketchSafeModeOn=_sketchSafeModeOn;
@property(retain, nonatomic) MSPersistentAssetCollection *globalAssets; // @synthesize globalAssets=_globalAssets;
@property(nonatomic) double launchEndTime; // @synthesize launchEndTime=_launchEndTime;
@property(nonatomic) double launchStartTime; // @synthesize launchStartTime=_launchStartTime;
@property(nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) MSAssetLibraryController *librariesController; // @synthesize librariesController=_librariesController;
@property(readonly, nonatomic) MSActionController *actionController; // @synthesize actionController=_actionController;
@property(readonly, nonatomic) MSUpdateController *updateController; // @synthesize updateController=_updateController;
@property(retain, nonatomic) BCLicenseManager *licenseManager; // @synthesize licenseManager=_licenseManager;
@property(retain, nonatomic) MSPluginManagerWithActions *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(readonly, nonatomic) MSCrashLogManager *crashLogManager; // @synthesize crashLogManager=_crashLogManager;
@property(readonly, nonatomic) MSDataMenuProvider *dataFeedProvider; // @synthesize dataFeedProvider=_dataFeedProvider;
@property(retain, nonatomic) MSMirrorDataProvider *mirrorDataProvider; // @synthesize mirrorDataProvider=_mirrorDataProvider;
@property(retain, nonatomic) SMKMirrorController *mirrorController; // @synthesize mirrorController=_mirrorController;
@property(retain, nonatomic) MSPasteboardManager *pasteboardManager; // @synthesize pasteboardManager=_pasteboardManager;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSMenuItem *cloudEnvironmentMenuItem; // @synthesize cloudEnvironmentMenuItem=_cloudEnvironmentMenuItem;
@property(retain, nonatomic) NSMenuItem *dataFeedMenuItem; // @synthesize dataFeedMenuItem=_dataFeedMenuItem;
@property(retain, nonatomic) NSMenuItem *insertSharedTextStyleMenuItem; // @synthesize insertSharedTextStyleMenuItem=_insertSharedTextStyleMenuItem;
@property(retain, nonatomic) NSMenuItem *insertSymbolMenuItem; // @synthesize insertSymbolMenuItem=_insertSymbolMenuItem;
@property(retain, nonatomic) MSIOSConnectionController *connectionController; // @synthesize connectionController=_connectionController;
@property(nonatomic) __weak NSMenuItem *debugMenuItem; // @synthesize debugMenuItem=_debugMenuItem;
@property(nonatomic) __weak NSMenuItem *prototypingMenuItem; // @synthesize prototypingMenuItem=_prototypingMenuItem;
@property(nonatomic) __weak NSMenu *printMenu; // @synthesize printMenu=_printMenu;
@property(nonatomic) __weak NSMenu *templatesMenu; // @synthesize templatesMenu=_templatesMenu;
@property(nonatomic) __weak NSMenuItem *pluginsMenuItem; // @synthesize pluginsMenuItem=_pluginsMenuItem;
@property(nonatomic) __weak id shapesMenu; // @synthesize shapesMenu=_shapesMenu;
- (void).cxx_destruct;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (void)waitForResourceMigrationToFinish;
- (void)migrateResources:(id)arg1;
- (id)resourcesNeedingMigrationFromResources:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)refreshDocumentWindowBadges;
- (void)refreshCurrentDocument;
- (void)currentDocumentDidChange;
- (void)showLicenseAlert:(long long)arg1 remainingDays:(unsigned long long)arg2;
- (void)updateLicenseManager;
- (void)setupLicenseManagerWithPublicCertificate:(id)arg1 licenseURL:(id)arg2 applicationID:(id)arg3;
- (void)startLicenseManager;
- (void)buy:(id)arg1;
- (void)openAboutWindow:(id)arg1;
- (void)openPreferencesWindowWithPreferencePaneIdentifier:(id)arg1;
- (void)documentWillClose:(id)arg1;
- (void)requestDataFromPluginDataSupplier:(id)arg1 pluginContext:(id)arg2;
- (void)dataMenuProvider:(id)arg1 didChooseData:(id)arg2;
- (BOOL)dataMenuProviderIsInspectorPopupMenu:(id)arg1;
- (unsigned long long)dataMenuProviderDataTypeForMenuBuilding:(id)arg1;
- (BOOL)dataMenuProvider:(id)arg1 canChooseDataOfType:(unsigned long long)arg2;
- (void)revealTemplatesFolderInFinder:(id)arg1;
- (void)addTemplatesAtPath:(id)arg1 toMenu:(id)arg2;
- (id)templateLibraryPath;
- (void)updateTemplateMenu:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)openTemplateAtPath:(id)arg1;
- (void)openTemplateFile:(id)arg1;
- (void)checkImageTemplates;
- (void)checkDefaults;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long checkForUpdatesPeriod;
- (void)badgeWindows;
- (void)checkForAndDownloadPluginUpdates;
- (void)installCompatiblePluginUpdates;
@property(readonly, nonatomic) MSDataSupplierManager *dataSupplierManager;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)checkForAssetLibraryUpdates;
- (void)createActions;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)ensureUserTemplateDirectoryExists;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (BOOL)isFirstLaunchOfNewVersion;
- (void)storePluginList:(id)arg1 inCrashLogKey:(id)arg2;
- (void)storePluginsForCrashReport;
- (void)reloadAssetLibraryPreferencesTableView;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)awakeFromNib;
@property(readonly, nonatomic) BOOL canShowWelcomeWindowForUserAction;
- (void)showMainApplicationWindow;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserversForVisualSettings;
- (void)addObserversForVisualSettings;
- (id)init;
- (void)displayDuplicateAlertSheetForRemoteAssetLibrary:(id)arg1;
- (void)startDownloadingLibrary:(id)arg1;
- (void)openCloudUploadURL:(id)arg1 parameters:(id)arg2;
- (void)openCloudURL:(id)arg1;
- (void)openAddLibraryURL:(id)arg1 parameters:(id)arg2;
- (void)didOpenURL:(id)arg1;
- (void)handleURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)registerURLScheme;
- (id)actionClasses;
- (void)scriptingMenuAction:(id)arg1;
- (BOOL)validatePluginMenuItem:(id)arg1 documentShowing:(BOOL)arg2;
- (id)runPluginScript:(id)arg1 handler:(id)arg2 name:(id)arg3 withPreprocess:(BOOL)arg4;
- (id)runPluginScript:(id)arg1 name:(id)arg2;
- (id)runPluginCommand:(id)arg1 fromMenu:(BOOL)arg2 context:(id)arg3 onComplete:(CDUnknownBlockType)arg4;
- (id)runPluginCommand:(id)arg1 fromMenu:(BOOL)arg2 context:(id)arg3;
- (id)targetDocumentForPluginCommand;
- (void)buildPluginsMenu:(id)arg1;
- (void)editPlugins:(id)arg1;
- (void)revealPlugin:(id)arg1;
@property(readonly, nonatomic) MSPluginCommand *lastRun;
- (void)rememberLastRun:(id)arg1;
- (id)runPluginCommandWithIdentifier:(id)arg1 fromBundleAtURL:(id)arg2 context:(id)arg3 portToAsnwerTo:(id)arg4;
- (id)runPluginCommandWithIdentifier:(id)arg1 fromBundleAtURL:(id)arg2 context:(id)arg3;
- (id)runPluginAtURL:(id)arg1;
- (id)evaluateScript:(id)arg1;
- (id)runPluginCommandWithIdentifier:(id)arg1 fromBundleAtURL:(id)arg2;
- (id)runPluginCommand:(id)arg1 fromMenu:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

