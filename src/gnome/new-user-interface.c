/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#include <gnome.h>

#include "new-user-callbacks.h"
#include "new-user-interface.h"
#include "glade-support.h"

GtkWidget*
create_newUserDialog (void)
{
  GtkWidget *newUserDialog;
  GtkWidget *accountChooseDruidPage;
  GtkWidget *newUserStartPage;
  GdkColor newUserStartPage_bg_color = { 0, 6425, 6425, 28784 };
  GdkColor newUserStartPage_textbox_color = { 0, 65535, 65535, 65535 };
  GdkColor newUserStartPage_logo_bg_color = { 0, 65535, 65535, 65535 };
  GdkColor newUserStartPage_title_color = { 0, 65535, 65535, 65535 };
  GtkWidget *newAccountCurrencyChoosePage;
  GtkWidget *newAccountCurrencyChooser_vbox;
  GtkWidget *vbox2;
  GtkWidget *newUserChooseCurrencyDescrip;
  GtkWidget *chooseAccountTypesPage;
  GdkColor chooseAccountTypesPage_bg_color = { 0, 6425, 6425, 28784 };
  GdkColor chooseAccountTypesPage_logo_bg_color = { 0, 65535, 65535, 65535 };
  GdkColor chooseAccountTypesPage_title_color = { 0, 65535, 65535, 65535 };
  GtkWidget *druid_vbox1;
  GtkWidget *pickAccountsDescriptionLabel;
  GtkWidget *scrolledwindow1;
  GtkWidget *newAccountTypesList;
  GtkWidget *label2;
  GtkWidget *label3;
  GtkWidget *label4;
  GtkWidget *hbox1;
  GtkWidget *scrolledwindow2;
  GtkWidget *accountTypesDescription;
  GtkWidget *scrolledwindow3;
  GtkWidget *viewport1;
  GtkWidget *newAccountListTree;
  GtkWidget *newUserDruidFinishPage;
  GdkColor newUserDruidFinishPage_bg_color = { 0, 6425, 6425, 28784 };
  GdkColor newUserDruidFinishPage_textbox_color = { 0, 65535, 65535, 65535 };
  GdkColor newUserDruidFinishPage_logo_bg_color = { 0, 65535, 65535, 65535 };
  GdkColor newUserDruidFinishPage_title_color = { 0, 65535, 65535, 65535 };

  newUserDialog = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (newUserDialog, "newUserDialog");
  gtk_object_set_data (GTK_OBJECT (newUserDialog), "newUserDialog", newUserDialog);
  gtk_widget_set_usize (newUserDialog, 540, 370);
  gtk_window_set_title (GTK_WINDOW (newUserDialog), _("New User Account setup"));

  accountChooseDruidPage = gnome_druid_new ();
  gtk_widget_set_name (accountChooseDruidPage, "accountChooseDruidPage");
  gtk_widget_ref (accountChooseDruidPage);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "accountChooseDruidPage", accountChooseDruidPage,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (accountChooseDruidPage);
  gtk_container_add (GTK_CONTAINER (newUserDialog), accountChooseDruidPage);

  newUserStartPage = gnome_druid_page_start_new ();
  gtk_widget_set_name (newUserStartPage, "newUserStartPage");
  gtk_widget_ref (newUserStartPage);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "newUserStartPage", newUserStartPage,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newUserStartPage);
  gnome_druid_append_page (GNOME_DRUID (accountChooseDruidPage), GNOME_DRUID_PAGE (newUserStartPage));
  gnome_druid_set_page (GNOME_DRUID (accountChooseDruidPage), GNOME_DRUID_PAGE (newUserStartPage));
  gnome_druid_page_start_set_bg_color (GNOME_DRUID_PAGE_START (newUserStartPage), &newUserStartPage_bg_color);
  gnome_druid_page_start_set_textbox_color (GNOME_DRUID_PAGE_START (newUserStartPage), &newUserStartPage_textbox_color);
  gnome_druid_page_start_set_logo_bg_color (GNOME_DRUID_PAGE_START (newUserStartPage), &newUserStartPage_logo_bg_color);
  gnome_druid_page_start_set_title_color (GNOME_DRUID_PAGE_START (newUserStartPage), &newUserStartPage_title_color);
  gnome_druid_page_start_set_title (GNOME_DRUID_PAGE_START (newUserStartPage), _("New User Account Setup"));
  gnome_druid_page_start_set_text (GNOME_DRUID_PAGE_START (newUserStartPage), _("This wizard will help you to set up a default set of accounts to use."));

  newAccountCurrencyChoosePage = gnome_druid_page_standard_new_with_vals ("", NULL);
  gtk_widget_set_name (newAccountCurrencyChoosePage, "newAccountCurrencyChoosePage");
  gtk_widget_ref (newAccountCurrencyChoosePage);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "newAccountCurrencyChoosePage", newAccountCurrencyChoosePage,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show_all (newAccountCurrencyChoosePage);
  gnome_druid_append_page (GNOME_DRUID (accountChooseDruidPage), GNOME_DRUID_PAGE (newAccountCurrencyChoosePage));
  gnome_druid_page_standard_set_title (GNOME_DRUID_PAGE_STANDARD (newAccountCurrencyChoosePage), _("Choose Currency"));

  newAccountCurrencyChooser_vbox = GNOME_DRUID_PAGE_STANDARD (newAccountCurrencyChoosePage)->vbox;
  gtk_widget_set_name (newAccountCurrencyChooser_vbox, "newAccountCurrencyChooser_vbox");
  gtk_widget_ref (newAccountCurrencyChooser_vbox);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "newAccountCurrencyChooser_vbox", newAccountCurrencyChooser_vbox,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newAccountCurrencyChooser_vbox);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox2, "vbox2");
  gtk_widget_ref (vbox2);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "vbox2", vbox2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox2);
  gtk_box_pack_start (GTK_BOX (newAccountCurrencyChooser_vbox), vbox2, TRUE, TRUE, 0);

  newUserChooseCurrencyDescrip = gtk_label_new (_("Please choose the currency to use for new accounts."));
  gtk_widget_set_name (newUserChooseCurrencyDescrip, "newUserChooseCurrencyDescrip");
  gtk_widget_ref (newUserChooseCurrencyDescrip);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "newUserChooseCurrencyDescrip", newUserChooseCurrencyDescrip,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newUserChooseCurrencyDescrip);
  gtk_box_pack_start (GTK_BOX (vbox2), newUserChooseCurrencyDescrip, FALSE, FALSE, 0);
  gtk_widget_set_sensitive (newUserChooseCurrencyDescrip, FALSE);

  chooseAccountTypesPage = gnome_druid_page_standard_new_with_vals ("", NULL);
  gtk_widget_set_name (chooseAccountTypesPage, "chooseAccountTypesPage");
  gtk_widget_ref (chooseAccountTypesPage);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "chooseAccountTypesPage", chooseAccountTypesPage,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show_all (chooseAccountTypesPage);
  gnome_druid_append_page (GNOME_DRUID (accountChooseDruidPage), GNOME_DRUID_PAGE (chooseAccountTypesPage));
  gnome_druid_page_standard_set_bg_color (GNOME_DRUID_PAGE_STANDARD (chooseAccountTypesPage), &chooseAccountTypesPage_bg_color);
  gnome_druid_page_standard_set_logo_bg_color (GNOME_DRUID_PAGE_STANDARD (chooseAccountTypesPage), &chooseAccountTypesPage_logo_bg_color);
  gnome_druid_page_standard_set_title_color (GNOME_DRUID_PAGE_STANDARD (chooseAccountTypesPage), &chooseAccountTypesPage_title_color);
  gnome_druid_page_standard_set_title (GNOME_DRUID_PAGE_STANDARD (chooseAccountTypesPage), _("Choose Account Types"));

  druid_vbox1 = GNOME_DRUID_PAGE_STANDARD (chooseAccountTypesPage)->vbox;
  gtk_widget_set_name (druid_vbox1, "druid_vbox1");
  gtk_widget_ref (druid_vbox1);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "druid_vbox1", druid_vbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (druid_vbox1);

  pickAccountsDescriptionLabel = gtk_label_new (_("Please check the account types you would like to have automatically setup in gnucash."));
  gtk_widget_set_name (pickAccountsDescriptionLabel, "pickAccountsDescriptionLabel");
  gtk_widget_ref (pickAccountsDescriptionLabel);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "pickAccountsDescriptionLabel", pickAccountsDescriptionLabel,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pickAccountsDescriptionLabel);
  gtk_box_pack_start (GTK_BOX (druid_vbox1), pickAccountsDescriptionLabel, FALSE, FALSE, 0);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow1, "scrolledwindow1");
  gtk_widget_ref (scrolledwindow1);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "scrolledwindow1", scrolledwindow1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow1);
  gtk_box_pack_start (GTK_BOX (druid_vbox1), scrolledwindow1, TRUE, TRUE, 0);

  newAccountTypesList = gtk_clist_new (3);
  gtk_widget_set_name (newAccountTypesList, "newAccountTypesList");
  gtk_widget_ref (newAccountTypesList);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "newAccountTypesList", newAccountTypesList,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newAccountTypesList);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), newAccountTypesList);
  gtk_clist_set_column_width (GTK_CLIST (newAccountTypesList), 0, 52);
  gtk_clist_set_column_width (GTK_CLIST (newAccountTypesList), 1, 152);
  gtk_clist_set_column_width (GTK_CLIST (newAccountTypesList), 2, 80);
  gtk_clist_set_selection_mode (GTK_CLIST (newAccountTypesList), GTK_SELECTION_MULTIPLE);
  gtk_clist_column_titles_show (GTK_CLIST (newAccountTypesList));

  label2 = gtk_label_new (_("Choose"));
  gtk_widget_set_name (label2, "label2");
  gtk_widget_ref (label2);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "label2", label2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label2);
  gtk_clist_set_column_widget (GTK_CLIST (newAccountTypesList), 0, label2);

  label3 = gtk_label_new (_("Account Type Name"));
  gtk_widget_set_name (label3, "label3");
  gtk_widget_ref (label3);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "label3", label3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label3);
  gtk_clist_set_column_widget (GTK_CLIST (newAccountTypesList), 1, label3);

  label4 = gtk_label_new (_("Description"));
  gtk_widget_set_name (label4, "label4");
  gtk_widget_ref (label4);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "label4", label4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label4);
  gtk_clist_set_column_widget (GTK_CLIST (newAccountTypesList), 2, label4);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox1, "hbox1");
  gtk_widget_ref (hbox1);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "hbox1", hbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (druid_vbox1), hbox1, TRUE, TRUE, 0);

  scrolledwindow2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow2, "scrolledwindow2");
  gtk_widget_ref (scrolledwindow2);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "scrolledwindow2", scrolledwindow2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow2);
  gtk_box_pack_start (GTK_BOX (hbox1), scrolledwindow2, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow2), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  accountTypesDescription = gtk_text_new (NULL, NULL);
  gtk_widget_set_name (accountTypesDescription, "accountTypesDescription");
  gtk_widget_ref (accountTypesDescription);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "accountTypesDescription", accountTypesDescription,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (accountTypesDescription);
  gtk_container_add (GTK_CONTAINER (scrolledwindow2), accountTypesDescription);
  gtk_widget_set_sensitive (accountTypesDescription, FALSE);
  GTK_WIDGET_UNSET_FLAGS (accountTypesDescription, GTK_CAN_FOCUS);

  scrolledwindow3 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow3, "scrolledwindow3");
  gtk_widget_ref (scrolledwindow3);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "scrolledwindow3", scrolledwindow3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow3);
  gtk_box_pack_start (GTK_BOX (hbox1), scrolledwindow3, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow3), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  viewport1 = gtk_viewport_new (NULL, NULL);
  gtk_widget_set_name (viewport1, "viewport1");
  gtk_widget_ref (viewport1);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "viewport1", viewport1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (viewport1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow3), viewport1);

  newAccountListTree = gtk_tree_new ();
  gtk_widget_set_name (newAccountListTree, "newAccountListTree");
  gtk_widget_ref (newAccountListTree);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "newAccountListTree", newAccountListTree,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newAccountListTree);
  gtk_container_add (GTK_CONTAINER (viewport1), newAccountListTree);
  gtk_widget_set_sensitive (newAccountListTree, FALSE);

  newUserDruidFinishPage = gnome_druid_page_finish_new ();
  gtk_widget_set_name (newUserDruidFinishPage, "newUserDruidFinishPage");
  gtk_widget_ref (newUserDruidFinishPage);
  gtk_object_set_data_full (GTK_OBJECT (newUserDialog), "newUserDruidFinishPage", newUserDruidFinishPage,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newUserDruidFinishPage);
  gnome_druid_append_page (GNOME_DRUID (accountChooseDruidPage), GNOME_DRUID_PAGE (newUserDruidFinishPage));
  gnome_druid_page_finish_set_bg_color (GNOME_DRUID_PAGE_FINISH (newUserDruidFinishPage), &newUserDruidFinishPage_bg_color);
  gnome_druid_page_finish_set_textbox_color (GNOME_DRUID_PAGE_FINISH (newUserDruidFinishPage), &newUserDruidFinishPage_textbox_color);
  gnome_druid_page_finish_set_logo_bg_color (GNOME_DRUID_PAGE_FINISH (newUserDruidFinishPage), &newUserDruidFinishPage_logo_bg_color);
  gnome_druid_page_finish_set_title_color (GNOME_DRUID_PAGE_FINISH (newUserDruidFinishPage), &newUserDruidFinishPage_title_color);
  gnome_druid_page_finish_set_title (GNOME_DRUID_PAGE_FINISH (newUserDruidFinishPage), _("Finish Account Setup"));
  gnome_druid_page_finish_set_text (GNOME_DRUID_PAGE_FINISH (newUserDruidFinishPage), _("Please check the window for the new accounts that will be created.\nPress finish if this is OK."));

  gtk_signal_connect (GTK_OBJECT (accountChooseDruidPage), "cancel",
                      GTK_SIGNAL_FUNC (on_accountChooseDruidPage_cancel),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (newUserStartPage), "next",
                      GTK_SIGNAL_FUNC (on_newUserStartPage_next),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (newAccountCurrencyChoosePage), "prepare",
                      GTK_SIGNAL_FUNC (on_newAccountCurrencyChoosePage_prepare),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (chooseAccountTypesPage), "next",
                      GTK_SIGNAL_FUNC (on_chooseAccountTypesPage_next),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (chooseAccountTypesPage), "prepare",
                      GTK_SIGNAL_FUNC (on_chooseAccountTypesPage_prepare),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (newUserDruidFinishPage), "finish",
                      GTK_SIGNAL_FUNC (on_newUserDruidFinishPage_finish),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (newUserDruidFinishPage), "prepare",
                      GTK_SIGNAL_FUNC (on_newUserDruidFinishPage_prepare),
                      NULL);

  return newUserDialog;
}

GtkWidget*
create_newAccountList (void)
{
  GtkWidget *newAccountList;
  GtkWidget *vbox3;
  GtkWidget *newAccountLable;
  GtkWidget *scrolledwindow4;
  GtkWidget *newAccountListCTree;
  GtkWidget *newAccountList_NameLable;
  GtkWidget *newAccountList_DescriptionLable;
  GtkWidget *newAccountList_BalanceLable;

  newAccountList = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (newAccountList, "newAccountList");
  gtk_object_set_data (GTK_OBJECT (newAccountList), "newAccountList", newAccountList);
  gtk_widget_set_usize (newAccountList, 200, 400);
  gtk_window_set_title (GTK_WINDOW (newAccountList), _("New Account List"));

  vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox3, "vbox3");
  gtk_widget_ref (vbox3);
  gtk_object_set_data_full (GTK_OBJECT (newAccountList), "vbox3", vbox3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox3);
  gtk_container_add (GTK_CONTAINER (newAccountList), vbox3);

  newAccountLable = gtk_label_new (_("If you would like the new accounts to have a balance please enter it into the Balance column in the list below."));
  gtk_widget_set_name (newAccountLable, "newAccountLable");
  gtk_widget_ref (newAccountLable);
  gtk_object_set_data_full (GTK_OBJECT (newAccountList), "newAccountLable", newAccountLable,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newAccountLable);
  gtk_box_pack_start (GTK_BOX (vbox3), newAccountLable, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (newAccountLable), GTK_JUSTIFY_RIGHT);
  gtk_label_set_line_wrap (GTK_LABEL (newAccountLable), TRUE);

  scrolledwindow4 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow4, "scrolledwindow4");
  gtk_widget_ref (scrolledwindow4);
  gtk_object_set_data_full (GTK_OBJECT (newAccountList), "scrolledwindow4", scrolledwindow4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow4);
  gtk_box_pack_start (GTK_BOX (vbox3), scrolledwindow4, TRUE, TRUE, 0);

  newAccountListCTree = gtk_ctree_new (3, 0);
  gtk_widget_set_name (newAccountListCTree, "newAccountListCTree");
  gtk_widget_ref (newAccountListCTree);
  gtk_object_set_data_full (GTK_OBJECT (newAccountList), "newAccountListCTree", newAccountListCTree,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newAccountListCTree);
  gtk_container_add (GTK_CONTAINER (scrolledwindow4), newAccountListCTree);
  gtk_clist_set_column_width (GTK_CLIST (newAccountListCTree), 0, 80);
  gtk_clist_set_column_width (GTK_CLIST (newAccountListCTree), 1, 157);
  gtk_clist_set_column_width (GTK_CLIST (newAccountListCTree), 2, 80);
  gtk_clist_column_titles_show (GTK_CLIST (newAccountListCTree));

  newAccountList_NameLable = gtk_label_new (_("Name"));
  gtk_widget_set_name (newAccountList_NameLable, "newAccountList_NameLable");
  gtk_widget_ref (newAccountList_NameLable);
  gtk_object_set_data_full (GTK_OBJECT (newAccountList), "newAccountList_NameLable", newAccountList_NameLable,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newAccountList_NameLable);
  gtk_clist_set_column_widget (GTK_CLIST (newAccountListCTree), 0, newAccountList_NameLable);

  newAccountList_DescriptionLable = gtk_label_new (_("Description"));
  gtk_widget_set_name (newAccountList_DescriptionLable, "newAccountList_DescriptionLable");
  gtk_widget_ref (newAccountList_DescriptionLable);
  gtk_object_set_data_full (GTK_OBJECT (newAccountList), "newAccountList_DescriptionLable", newAccountList_DescriptionLable,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newAccountList_DescriptionLable);
  gtk_clist_set_column_widget (GTK_CLIST (newAccountListCTree), 1, newAccountList_DescriptionLable);

  newAccountList_BalanceLable = gtk_label_new (_("Balance"));
  gtk_widget_set_name (newAccountList_BalanceLable, "newAccountList_BalanceLable");
  gtk_widget_ref (newAccountList_BalanceLable);
  gtk_object_set_data_full (GTK_OBJECT (newAccountList), "newAccountList_BalanceLable", newAccountList_BalanceLable,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newAccountList_BalanceLable);
  gtk_clist_set_column_widget (GTK_CLIST (newAccountListCTree), 2, newAccountList_BalanceLable);

  return newAccountList;
}

GtkWidget*
create_addAccountCancelDialog (void)
{
  GtkWidget *addAccountCancelDialog;
  GtkWidget *newAccountCancelDialog;
  GtkWidget *vbox1;
  GtkWidget *newAccountCancelDialog_ShouldRunAgainLable;
  GtkWidget *newAccountCancelDialog_RunAgainToggle;
  GtkWidget *dialog_action_area1;
  GtkWidget *newAccountCancelDialog_OKButton;

  addAccountCancelDialog = gnome_dialog_new (NULL, NULL);
  gtk_widget_set_name (addAccountCancelDialog, "addAccountCancelDialog");
  gtk_object_set_data (GTK_OBJECT (addAccountCancelDialog), "addAccountCancelDialog", addAccountCancelDialog);
  GTK_WINDOW (addAccountCancelDialog)->type = GTK_WINDOW_DIALOG;
  gtk_window_set_position (GTK_WINDOW (addAccountCancelDialog), GTK_WIN_POS_MOUSE);
  gtk_window_set_modal (GTK_WINDOW (addAccountCancelDialog), TRUE);
  gtk_window_set_policy (GTK_WINDOW (addAccountCancelDialog), FALSE, FALSE, FALSE);

  newAccountCancelDialog = GNOME_DIALOG (addAccountCancelDialog)->vbox;
  gtk_widget_set_name (newAccountCancelDialog, "newAccountCancelDialog");
  gtk_object_set_data (GTK_OBJECT (addAccountCancelDialog), "newAccountCancelDialog", newAccountCancelDialog);
  gtk_widget_show (newAccountCancelDialog);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox1, "vbox1");
  gtk_widget_ref (vbox1);
  gtk_object_set_data_full (GTK_OBJECT (addAccountCancelDialog), "vbox1", vbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox1);
  gtk_box_pack_start (GTK_BOX (newAccountCancelDialog), vbox1, TRUE, TRUE, 0);

  newAccountCancelDialog_ShouldRunAgainLable = gtk_label_new (_("Canceling.  Please uncheck if you would not like this new user dialog to run again."));
  gtk_widget_set_name (newAccountCancelDialog_ShouldRunAgainLable, "newAccountCancelDialog_ShouldRunAgainLable");
  gtk_widget_ref (newAccountCancelDialog_ShouldRunAgainLable);
  gtk_object_set_data_full (GTK_OBJECT (addAccountCancelDialog), "newAccountCancelDialog_ShouldRunAgainLable", newAccountCancelDialog_ShouldRunAgainLable,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newAccountCancelDialog_ShouldRunAgainLable);
  gtk_box_pack_start (GTK_BOX (vbox1), newAccountCancelDialog_ShouldRunAgainLable, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (newAccountCancelDialog_ShouldRunAgainLable), GTK_JUSTIFY_FILL);
  gtk_label_set_line_wrap (GTK_LABEL (newAccountCancelDialog_ShouldRunAgainLable), TRUE);

  newAccountCancelDialog_RunAgainToggle = gtk_check_button_new_with_label (_("Run New User Dialog again?"));
  gtk_widget_set_name (newAccountCancelDialog_RunAgainToggle, "newAccountCancelDialog_RunAgainToggle");
  gtk_widget_ref (newAccountCancelDialog_RunAgainToggle);
  gtk_object_set_data_full (GTK_OBJECT (addAccountCancelDialog), "newAccountCancelDialog_RunAgainToggle", newAccountCancelDialog_RunAgainToggle,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newAccountCancelDialog_RunAgainToggle);
  gtk_box_pack_start (GTK_BOX (vbox1), newAccountCancelDialog_RunAgainToggle, FALSE, FALSE, 0);
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (newAccountCancelDialog_RunAgainToggle), TRUE);

  dialog_action_area1 = GNOME_DIALOG (addAccountCancelDialog)->action_area;
  gtk_widget_set_name (dialog_action_area1, "dialog_action_area1");
  gtk_object_set_data (GTK_OBJECT (addAccountCancelDialog), "dialog_action_area1", dialog_action_area1);
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (dialog_action_area1), 8);

  gnome_dialog_append_button (GNOME_DIALOG (addAccountCancelDialog), GNOME_STOCK_BUTTON_OK);
  newAccountCancelDialog_OKButton = GTK_WIDGET (g_list_last (GNOME_DIALOG (addAccountCancelDialog)->buttons)->data);
  gtk_widget_set_name (newAccountCancelDialog_OKButton, "newAccountCancelDialog_OKButton");
  gtk_widget_ref (newAccountCancelDialog_OKButton);
  gtk_object_set_data_full (GTK_OBJECT (addAccountCancelDialog), "newAccountCancelDialog_OKButton", newAccountCancelDialog_OKButton,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (newAccountCancelDialog_OKButton);
  GTK_WIDGET_SET_FLAGS (newAccountCancelDialog_OKButton, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (newAccountCancelDialog_RunAgainToggle), "toggled",
                      GTK_SIGNAL_FUNC (on_newAccountRunAgain_toggled),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (newAccountCancelDialog_OKButton), "clicked",
                      GTK_SIGNAL_FUNC (on_newAccountCancelDialog_OKButton_clicked),
                      NULL);

  return addAccountCancelDialog;
}

